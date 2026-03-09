#include<stdio.h>
#include<conio.h>


	int adj[10][10],visited[10];
	int v;
	int n;
	
	void DFS(int v)
	{
		int i;
		printf("%d",v);
		visited[v]=1;
		for(i=0;i<n;i++)
		{
			if(adj[v][i]==1 && visited[i]==0)
			{
				DFS(i);
			}
		}
	}

int main()
{
	int i,j,start,e1,e2;
	char ch;
	
	printf("enter number of verices");
	scanf("%d",&n);
	
	printf("enter adjaceny matix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			adj[i][j]=0;
		}
		visited[i]=0;
	}
	
		do
		{
			printf("\nEnter Edge 1: ");
			scanf("%d",&e1);
			printf("Enter Edge 2: ");
			scanf("%d",&e2);
			
			if(e1>=n || e1<0 || e2>=n || e2<0)
			{
				printf("\n Invalid EDGE Enter Valid Edge\n");
				printf("\n %d is the limit of edges and vertex \n",n-1);
	
			}
			else
			{
				adj[e1][e2]=1;
				adj[e2][e1]=1;
			}
			
			printf("\nDo You want to contine (y/n): ");
			scanf("%s",&ch);
		}while(ch=='y' || ch=='Y');
		
		
	printf("entre sraling vertex");
	scanf("%d",&start);
	
	printf("DFS travels:\n");
	DFS (start);
		
	return 0;
}
