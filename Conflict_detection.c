#include <stdio.h>
#include <string.h>

#define MAX 20

struct Package
{
    char name[30];
    char version[20];
};

int main()
{
    int n;

    printf("Enter number of packages: ");
    scanf("%d", &n);

    struct Package p[MAX];

    for(int i = 0; i < n; i++)
    {
        printf("Package Name: ");
        scanf("%s", p[i].name);

        printf("Version: ");
        scanf("%s", p[i].version);
    }

    int conflict = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(strcmp(p[i].name, p[j].name) == 0 &&
               strcmp(p[i].version, p[j].version) != 0)
            {
                printf("Conflict: %s (%s vs %s)\n",
                       p[i].name,
                       p[i].version,
                       p[j].version);

                conflict = 1;
            }
        }
    }

    if(!conflict)
        printf("No Conflicts Found\n");

    return 0;
}