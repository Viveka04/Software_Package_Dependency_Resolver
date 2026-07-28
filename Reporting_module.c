#include <stdio.h>

void generateReport(int packages,
                    int dependencies,
                    int conflicts,
                    int cycles)
{
    printf("\n===== Dependency Report =====\n");

    printf("Packages Processed : %d\n", packages);
    printf("Dependencies Found : %d\n", dependencies);
    printf("Conflicts Found    : %d\n", conflicts);
    printf("Cycles Found       : %d\n", cycles);

    if(cycles == 0)
        printf("Status             : Success\n");
    else
        printf("Status             : Failed\n");
}

int main()
{
    int packages, dependencies, conflicts, cycles;

    printf("Packages: ");
    scanf("%d", &packages);

    printf("Dependencies: ");
    scanf("%d", &dependencies);

    printf("Conflicts: ");
    scanf("%d", &conflicts);

    printf("Cycles: ");
    scanf("%d", &cycles);

    generateReport(packages,
                   dependencies,
                   conflicts,
                   cycles);

    return 0;
}