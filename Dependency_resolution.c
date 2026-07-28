#include <stdio.h>

#define MAX 20

int graph[MAX][MAX];
int vertices;

void resolveDependencies(int package)
{
    printf("Dependencies of Package %d:\n", package);

    int found = 0;

    for(int i = 0; i < vertices; i++)
    {
        if(graph[package][i])
        {
            printf("Package %d\n", i);
            found = 1;
        }
    }

    if(!found)
        printf("No dependencies found.\n");
}

int main()
{
    int edges, src, dest, package;

    printf("Enter number of packages: ");
    scanf("%d", &vertices);

    printf("Enter number of dependencies: ");
    scanf("%d", &edges);

    for(int i = 0; i < edges; i++)
    {
        scanf("%d%d", &src, &dest);
        graph[src][dest] = 1;
    }

    printf("Enter package to resolve: ");
    scanf("%d", &package);

    resolveDependencies(package);

    return 0;
}
