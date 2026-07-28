#include <stdio.h>

#include <string.h>


#define MAX_PACKAGES 100


typedef struct

{

    int id;

    char name[50];

    char version[20];

} Package;


Package packages[MAX_PACKAGES];

int packageCount = 0;


/* Add Package */

void addPackage()

{

    if(packageCount >= MAX_PACKAGES)

    {

        printf("Package storage full!\n");

        return;

    }


    Package p;


    printf("Enter Package ID: ");

    scanf("%d", &p.id);


    printf("Enter Package Name: ");

    scanf("%s", p.name);


    printf("Enter Package Version: ");

    scanf("%s", p.version);


    packages[packageCount++] = p;


    printf("Package Added Successfully.\n");

}


/* Delete Package */

void deletePackage(int id)

{

    int found = 0;


    for(int i = 0; i < packageCount; i++)

    {

        if(packages[i].id == id)

        {

            found = 1;


            for(int j = i; j < packageCount - 1; j++)

            {

                packages[j] = packages[j + 1];

            }


            packageCount--;


            printf("Package Deleted Successfully.\n");

            break;

        }

    }


    if(!found)

    {

        printf("Package Not Found.\n");

    }

}


/* Modify Package Version */

void modifyPackage(int id)

{

    int found = 0;

    char newVersion[20];


    for(int i = 0; i < packageCount; i++)

    {

        if(packages[i].id == id)

        {

            found = 1;


            printf("Current Version: %s\n",

                   packages[i].version);


            printf("Enter New Version: ");

            scanf("%s", newVersion);


            strcpy(packages[i].version,

                   newVersion);


            printf("Package Updated Successfully.\n");

            break;

        }

    }


    if(!found)

    {

        printf("Package Not Found.\n");

    }

}


/* View Single Package */

void viewPackage(int id)

{

    int found = 0;


    for(int i = 0; i < packageCount; i++)

    {

        if(packages[i].id == id)

        {

            found = 1;


            printf("\nPackage Details\n");

            printf("---------------------\n");

            printf("ID      : %d\n", packages[i].id);

            printf("Name    : %s\n", packages[i].name);

            printf("Version : %s\n",

                   packages[i].version);


            break;

        }

    }


    if(!found)

    {

        printf("Package Not Found.\n");

    }

}


/* View All Packages */

void viewAllPackages()

{

    if(packageCount == 0)

    {

        printf("No Packages Available.\n");

        return;

    }


    printf("\nRegistered Packages\n");

    printf("========================\n");


    for(int i = 0; i < packageCount; i++)

    {

        printf("ID      : %d\n",

               packages[i].id);


        printf("Name    : %s\n",

               packages[i].name);


        printf("Version : %s\n",

               packages[i].version);


        printf("---------------------\n");

    }

}


int main()

{

    int choice;

    int id;


    do

    {

        printf("\n====== PACKAGE MANAGEMENT MODULE ======\n");

        printf("1. Add Package\n");

        printf("2. Delete Package\n");

        printf("3. Modify Package\n");

        printf("4. View Package\n");

        printf("5. View All Packages\n");

        printf("0. Exit\n");


        printf("Enter Choice: ");

        scanf("%d", &choice);


        switch(choice)

        {

            case 1:

                addPackage();

                break;


            case 2:

                printf("Enter Package ID: ");

                scanf("%d", &id);

                deletePackage(id);

                break;


            case 3:

                printf("Enter Package ID: ");

                scanf("%d", &id);

                modifyPackage(id);

                break;


            case 4:

                printf("Enter Package ID: ");

                scanf("%d", &id);

                viewPackage(id);

                break;


            case 5:

                viewAllPackages();

                break;


            case 0:

                printf("Exiting...\n");

                break;


            default:

                printf("Invalid Choice.\n");

        }


    } while(choice != 0);


    return 0;

}
