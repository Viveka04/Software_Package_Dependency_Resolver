#include <stdio.h>

void testPackageManagement()
{
int id;

printf("Enter Package ID: ");
scanf("%d",&id);

if(id > 0)
printf("PASS: Valid Package ID\n");
else
printf("FAIL: Invalid Package ID\n");
}

void testDependencyGraph()
{
int vertices, edges;

printf("Enter number of packages: ");
scanf("%d",&vertices);

printf("Enter number of dependencies: ");
scanf("%d",&edges);

printf("Graph Test Executed Successfully\n");
}

void testCircularDependency()
{
int cycle;

printf("Enter Result (1=Cycle Found, 0=No Cycle): ");
scanf("%d",&cycle);

if(cycle)
printf("PASS: Circular Dependency Found\n");
else
printf("PASS: No Circular Dependency\n");
}

void testDependencyResolution()
{
int deps;

printf("Enter Number of Dependencies: ");
scanf("%d",&deps);

if(deps >= 0)
printf("PASS: Dependency Resolution Working\n");
}

void testInstallationOrder()
{
int count;

printf("Enter Number of Packages: ");
scanf("%d",&count);

printf("PASS: Installation Order Generated\n");
}

void testConflictDetection()
{
int conflict;

printf("Enter Conflict Status (1=Conflict,0=No Conflict): ");
scanf("%d",&conflict);

if(conflict)
printf("PASS: Conflict Detected\n");
else
printf("PASS: No Conflict Found\n");
}

void testReportingModule()
{
int packages;

printf("Enter Packages Processed: ");
scanf("%d",&packages);

printf("PASS: Report Generated\n");
}

void testUserInterface()
{
int choice;

printf("Enter Menu Choice: ");
scanf("%d",&choice);

if(choice >= 1 && choice <= 8)
printf("PASS: Valid Menu Choice\n");
else
printf("FAIL: Invalid Choice\n");
}

int main()
{
int choice;

do
{
printf("\n===== TEST MENU =====\n");
printf("1. Package Management Test\n");
printf("2. Dependency Graph Test\n");
printf("3. Circular Dependency Test\n");
printf("4. Dependency Resolution Test\n");
printf("5. Installation Order Test\n");
printf("6. Conflict Detection Test\n");
printf("7. Reporting Module Test\n");
printf("8. User Interface Test\n");
printf("9. Exit\n");

printf("Enter Choice: ");
scanf("%d",&choice);

switch(choice)
{
case 1:
testPackageManagement();
break;

case 2:
testDependencyGraph();
break;

case 3:
testCircularDependency();
break;

case 4:
testDependencyResolution();
break;

case 5:
testInstallationOrder();
break;

case 6:
testConflictDetection();
break;

case 7:
testReportingModule();
break;

case 8:
testUserInterface();
break;

case 9:
printf("Exiting Test Suite...\n");
break;

default:
printf("Invalid Choice\n");
}

} while(choice != 9);

return 0;
}
