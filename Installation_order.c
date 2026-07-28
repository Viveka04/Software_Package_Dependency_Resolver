#include <stdio.h>

#define MAX 20

int graph[MAX][MAX];
int visited[MAX];
int stack[MAX];
int top = -1;
int vertices;

void topo(int node)
{
    visited[node] = 1;

    for(int i = 0; i < vertices; i++)
    {
        if(graph[node][i] && !visited[i])
            topo(i);
    }

    stack[++top] = node;
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
        scanf("%d%d", &src, &dest);
        graph[src][dest] = 1;
    }

    for(int i = 0; i < vertices; i++)
    {
        if(!visited[i])
            topo(i);
    }

    printf("Installation Order:\n");

    while(top != -1)
    {
        printf("Package %d ", stack[top--]);
    }

    printf("\n");

    return 0;
}