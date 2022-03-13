#include "header.h"

int main()
{
    int input;
    int numGoals = 0;
    char * ptr = "goals.txt";
    goal goals[MAX_LEN];
    printf("Life Basic\n");
    printf("Creating habits together, one step at a time\n");
    printf("********************************************\n");

    numGoals = readGoalFile(goals, ptr);

    do
    {
        // options
        printf("1. display all daily tasks\n");
        printf("2. display incompleted daily tasks\n");
        printf("3. display completed daily tasks\n");
        printf("4. add new task\n");
        printf("5. exit\n");
        printf("\n");

        printf ("Enter your choice: ");
        scanf ("%d", &input);

        switch (input)
        {
            // prints all the saved tasks
            case 1:
                printAllTasks(numGoals, goals);
                break;
            // prints incompleted saved tasks
            case 2:
                printIncTasks(numGoals, goals);
                break;
            // prints completed saved tasks
            case 3:
                printCompTasks(numGoals, goals);
                break;
            // adds new task to array
            case 4:
                numGoals = addNewTask(numGoals, goals);
                break;
            case 5:
			    break;
            default: printf ("That is an invalid choice\n");
        }
    } while (input != 5);

    // saves tasks to the text file (old and new)
    saveTasks(numGoals, goals, ptr);

    return 0;
}