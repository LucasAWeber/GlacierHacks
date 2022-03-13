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