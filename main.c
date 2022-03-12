#include "header.h"

int main()
{
    int numGoals = 0;
    goal goals[MAX_LEN];
    //goals = malloc(sizeof(goal));
    printf("Life Basic\n");
    printf("Creating habits together, one step at a time\n");

    numGoals = readGoalFile(goals, "goals.txt");

    for (int i = 0; i < numGoals; i++)
    {
        printf("name: %s\n", goals[i].goalName);
        printf("completed: %d\n", goals[i].completed);
    }

    //free(goals);

    return 0;
}