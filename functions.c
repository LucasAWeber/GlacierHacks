#include "header.h"

int readGoalFile(goal * goals, char * ptr)
{
    char temp[MAX_LEN];
    int i = 0;
    FILE * fptr = fopen(ptr, "r");
    while (!feof(fptr))
    {
        i++;
        fgets(goals[i-1].goalName, MAX_LEN, fptr);
        goals[i-1].goalName[strcspn(goals[i-1].goalName, "\n")] = 0;
        fgets(temp, MAX_LEN, fptr);
        if (atoi(temp))
        {
            goals[i-1].completed = true;
        }
        else
        {
            goals[i-1].completed = false;
        }
        fgets(temp, MAX_LEN, fptr);
        goals[i-1].numCompleted = atoi(temp);
    }
    fclose(fptr);
    return i;
}

void printAllTasks(int numGoals, goal * goals)
{
    printf("all daily tasks\n");
    printf("\n");

    for (int i = 0; i < numGoals; i++)
    {
        printf("name: %s\n", goals[i].goalName);
        if (goals[i].completed)
        {
            printf("completed today\n");
        }
        else
        {
            printf("not completed today\n");
        }
        printf("number completed: %d\n", goals[i].numCompleted);
        printf("\n");
    }
}

void printIncTasks(int numGoals, goal * goals)
{
    printf("incompleted daily tasks\n");
    printf("\n");

    for (int i = 0; i < numGoals; i++)
    {
        if (!goals[i].completed)
        {
            printf("name: %s\n", goals[i].goalName);
            if (goals[i].completed)
            {
                printf("completed today\n");
            }
            else
            {
                printf("not completed today\n");
            }
            printf("number completed: %d\n", goals[i].numCompleted);
            printf("\n");
        }
    }
}

void printCompTasks(int numGoals, goal * goals)
{
    printf("completed daily tasks\n");
    printf("\n");

    for (int i = 0; i < numGoals; i++)
    {
        if (goals[i].completed)
        {
            printf("name: %s\n", goals[i].goalName);
            if (goals[i].completed)
            {
                printf("completed today\n");
            }
            else
            {
                printf("not completed today\n");
            }
            printf("number completed: %d\n", goals[i].numCompleted);
            printf("\n");
        }
    }
}

int addNewTask(int numGoals, goal * goals)
{
    printf("name of new task: ");
    scanf("%s", goals[numGoals].goalName);
    goals[numGoals].completed = false;
    goals[numGoals].numCompleted = 0;
    numGoals++;
    return numGoals;
}

void saveTasks(int numGoals, goal * goals, char * ptr)
{
    FILE * fptr = fopen(ptr, "w");
    for (int i = 0; i < numGoals; i++)
    {
        fprintf(fptr, "%s\n", goals[i].goalName);
        fprintf(fptr, "%d\n", goals[i].completed);
        fprintf(fptr, "%d", goals[i].numCompleted);
        if (i != numGoals-1)
        {
            fprintf(fptr, "\n");
        }
    }
}