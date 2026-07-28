#include <stdio.h>

int main()
{
    int choice;

    do
    {
        printf("\n===== SOFTWARE PACKAGE DEPENDENCY RESOLVER =====\n");

        printf("1. Create Dependency Graph\n");
        printf("2. Detect Circular Dependency\n");
        printf("3. Resolve Dependencies\n");
        printf("4. Generate Installation Order\n");
        printf("5. Detect Conflicts\n");
        printf("6. Generate Report\n");
        printf("7. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Calling Dependency Graph Module...\n");
                break;

            case 2:
                printf("Calling Cycle Detection Module...\n");
                break;

            case 3:
                printf("Calling Dependency Resolver Module...\n");
                break;

            case 4:
                printf("Calling Topological Sort Module...\n");
                break;

            case 5:
                printf("Calling Conflict Detection Module...\n");
                break;

            case 6:
                printf("Calling Reporting Module...\n");
                break;

            case 7:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 7);

    return 0;
}