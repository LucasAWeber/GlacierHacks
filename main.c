#include "header.h"

int main()
{
    int numGoals = 0;
    goal goals[MAX_LEN];
    printf("Life Basic\n");
    printf("Creating habits together, one step at a time\n");
    printf("********************************************\n");

    numGoals = readGoalFile(goals, "goals.txt");

    printf("Daily Tasks\n");
    for (int i = 0; i < numGoals; i++)
    {
        printf("name: %s\n", goals[i].goalName);
        printf("completed: %d\n", goals[i].completed);
        printf("number completed: %d\n", goals[i].numCompleted);
    }

    return 0;
}