#include<stdio.h>
#include<stdlib.h>

int top=-1;
int a[5];
int n=5;
int count=0;

void push();
void display();
void pop();
void peep();
void exit();

void main()
{
	int j;
	printf("1.Push");
	printf("\n2.Display");
	printf("\n3.Exit");
	printf("\n4.POp");	
	printf("\n5.Peep");	
	printf("\n6.Stack Size");	
	printf("\nChose What You Want To Do: ");
	scanf("%d",&j);
	
	switch(j)
	{
		case 1:
			push();
			break;
		case 2:
			display();
			break;
		case 3:
			exit(0);
		case 4:
			pop();
			break;
		case 5:
			peep();
			break;
		case 6:
			printf("\nStack Size Is: %d\n",count);
			break;	
		default:
			printf("\nInvalid Choice\n");
	}
	main();
}

void push()
{
	if(top>=n-1)
	{
		printf("\nStack Is Full\n");
	}
	else
	{
		top++;
		printf("Enter Value: ");
		scanf("%d",&a[top]);
		count++;
	}
}

void display()
{
	int i;
	
	if(top<0)
	{
		printf("\n Stack Is Empty \n");
	}
	else
	{
		for(i=0;i<=top;i++)
		{
			printf("value->%d",a[i]);
			printf("\n");
		}
	}
}

void pop()
{
	if(top<0)
	{
		printf("\nStack Is Empty\n");
	}
	else
	{
		printf("Deleted Value Is:%d\n",a[top]);
		top--;
	}
}

void peep()
{
	if(top<0)
	{
		printf("\nStack Is Empty\n");
	}
	else
	{
		printf("\nTop Is At:%d\n",a[top]);
	}
}