#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 100

void bfs(int adj[MAX][MAX],int v,int start)
{
    int q[MAX];
    int f=0,r=0;
    bool visited[MAX]={false};

    visited[start]=true;
    q[r++]=start;

    printf("BFS Traversal: ");
    while(f<r)
    {
        int curr=q[f++];
        int i;

        printf("%d ",curr);

        for (i=0;i<v;i++)
        {
            if(adj[curr][i]==1 && !visited[i])
            {
                visited[i]=true;
                q[r++]=i;
            }
        }
    }
}

int main()
{
    int v,e;
    int adj[MAX][MAX]={0};

    printf("Enter the number of vertices: ");
    scanf("%d",&v);

    printf("Enter the number of edges: ");
    scanf("%d",&e);

    printf("Enter the edges: ");
    int i,j;

    for(i=0;i<e;i++)
    {
        int u,v;
        scanf("%d %d",&u,&v);
        adj[u][v]=1;
        adj[v][u]=1;
    }

    int start;
    printf("Enter the starting vertex: ");
    scanf("%d",&start);

    bfs(adj,v,start);

    printf("\nPress Enter to exit...");
    
    getchar();
    getchar();

    return 0;
}
