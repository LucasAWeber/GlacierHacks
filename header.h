#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define MAX_LEN 100

typedef struct Goal
{
    // name of the goal (written by user)
    char goalName[MAX_LEN];
    // a bool whether or not they completed this task during current time period or not
    bool completed;
    // tracks the number of times they have completed this task to give the user stats (would rather be more specific and also track WHEN they completed it/failed to do so)
    int numCompleted;
} goal;

int readGoalFile(goal * goals, char * ptr);
void printAllTasks(int numGoals, goal * goals);
void printIncTasks(int numGoals, goal * goals);
void printCompTasks(int numGoals, goal * goals);
int addNewTask(int numGoals, goal * goals);
void saveTasks(int numGoals, goal * goals, char * ptr);
