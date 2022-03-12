#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

typedef struct goal
{
    // name of the goal (written by user)
    char * goalName;
    // time frame in hours in between completing the goal again (this will prob be a time that users work towards, starts smaller and slowly increases till it reaches their inputted timeframe)
    int timeFrame;
    // a bool whether or not they completed this task during current time period or not
    bool completed;
    // tracks the number of times they have completed this task to give the user stats (would rather be more specific and also track WHEN they completed it/failed to do so)
    int numCompleted;
} goal;
