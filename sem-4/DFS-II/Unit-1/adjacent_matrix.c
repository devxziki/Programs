#include<stdio.h>
#include<stdlib.h>

int a[4][4],i,j,v1,v2;
	char ch;
	
void ADD();
void REMOVE();
void exit();


int main()
{
	int j;
			printf("\n1. ADD");
			printf("\n2. Remove");
			printf("\n3.Exit");
			printf("\nEnter Condition: ");
			scanf("%d",&j);
		switch(j)
		{
			case 1:
				ADD();
				break;
			case 2:
				REMOVE();
				break;
			case 3:
				exit(0);				
			
			default:
				printf("\n INvalid");
		}
		main();
	return 0;
}

void ADD()
{
	for (i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			a[i][j]=0;
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	do
	{
		printf("Enter Vertex 1: ");
		scanf("%d",&v1);
		printf("Enter Vertex 2: ");
		scanf("%d",&v2);
		a[v1][v2]=1;
		a[v2][v1]=1;
		
		printf("Do You want to contine (y/n): ");
		scanf("%s",&ch);
	}while(ch=='y' || ch=='Y');
	
	for (i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}

void REMOVE()
{
	do
	{
		printf("Enter Vertex 1: ");
		scanf("%d",&v1);
		printf("Enter Vertex 2: ");
		scanf("%d",&v2);
		a[v1][v2]=0;
		a[v2][v1]=0;
		
		printf("Do You want to contine (y/n): ");
		scanf("%s",&ch);
	}while(ch=='y' || ch=='Y');
	
	for (i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}