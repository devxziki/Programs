#include<stdio.h>
#include<conio.h>
int n;
int main()
{
	int a[100][100],i,j,v1,v2;
	char ch;
	
	printf("Enter Value of Vertex: ");
	scanf("%d",&n);
	
	
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=0;
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	do
	{
		printf("Enter Edge 1: ");
		scanf("%d",&v1);
		printf("Enter Edge 2: ");
		scanf("%d",&v2);
		a[v1][v2]=1;
		a[v2][v1]=1;
		
		printf("Do You want to contine (y/n): ");
		scanf("%s",&ch);
	}while(ch=='y' || ch=='Y');
	
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
