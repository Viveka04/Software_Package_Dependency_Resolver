#include <stdio.h>

#define MAX 20

int graph[MAX][MAX];
int visited[MAX];
int recStack[MAX];
int vertices;

int dfs(int node)
{
    visited[node] = 1;
    recStack[node] = 1;

    for(int i = 0; i < vertices; i++)
    {
        if(graph[node][i])
        {
            if(!visited[i])
            {
                if(dfs(i))
                    return 1;
            }
            else if(recStack[i])
            {
                return 1;
            }
        }
    }

    recStack[node] = 0;
    return 0;
}

int detectCycle()
{
    for(int i = 0; i < vertices; i++)
    {
        if(!visited[i])
        {
            if(dfs(i))
                return 1;
        }
    }
    return 0;
}

int main()
{
    int edges, src, dest;

    printf("Enter number of packages: ");
    scanf("%d", &vertices);

    printf("Enter number of dependencies: ");
    scanf("%d", &edges);

    for(int i = 0; i < edges; i++)
    {
        printf("Enter dependency (source destination): ");
        scanf("%d%d", &src, &dest);

        graph[src][dest] = 1;
    }

    if(detectCycle())
        printf("Circular Dependency Found\n");
    else
        printf("No Circular Dependency\n");

    return 0;
}

