#include<stdio.h>
#include<stdlib.h>

struct dlink
{
	int rno;
	struct dlink *next;
};

typedef struct dlink dnode;
dnode *lp=NULL;
int count=0;

void push(dnode *);
void display(dnode *);
void pop(dnode *);
void peep(dnode *);
void exit();

void main()
{
	int j;
	printf("1.Push");
	printf("\n2.Display");
	printf("\n3.Exit");
	printf("\n4.Pop");
	printf("\n5.Peep");
	printf("\n6.Stack Size");
	printf("\nChosse what you wanted to do:");
	scanf("%d",&j);
	
	switch(j)
	{
		case 1:
			push(lp);
			break;
		case 2:
			display(lp);
			break;
		case 3:
			exit(0);
		case 4:
			pop(lp);
			break;
		case 5:
			peep(lp);
			break;
		case 6:
			printf("Stack Size is:%d\n",count);
			break;
		default:
			printf("Invalid Choice\n");
			break;
	}
	main();
}

void push(dnode *ptr)
{
	dnode *new1;
	new1=(dnode *)malloc(sizeof(dnode));
	new1->next=NULL;
	
	printf("Enter Value: ");
	scanf("%d",&new1->rno);
	
	if(ptr==NULL)
	{
		lp=new1;
		count++;
	}
	else
	{
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=new1;
		new1->next=NULL;
		count++;
	}
}

void display(dnode *ptr)
{
	if(ptr==NULL)
	{
		printf("Stack Is Empty\n");
	}
	else
	{
		while(ptr!=NULL)
		{
			printf("Value->%d",ptr->rno);
			printf("\n");
			ptr=ptr->next;
		}
	}
}

void pop(dnode *ptr)
{
	dnode *ptr1;
	ptr1=(dnode *)malloc(sizeof(dnode));
	if(ptr==NULL)
	{
		printf("Stack Is Empty\n");
	}
	else
	{
		if(lp->next==NULL)
		{
			printf("Deleted Top Is:%d\n",lp->rno);
			lp=NULL;
			free(ptr);
			count--;
		}
		else
		{
			while(ptr->next!=NULL)
			{
				ptr1=ptr;
				ptr=ptr->next;
			}
			printf("Deleted Top Is:%d\n",ptr->rno);
			ptr1->next=NULL;
			free(ptr);
			count--;
		}
	}
}

void peep(dnode *ptr)
{
	if(ptr==NULL)
	{
		printf("Stack Is Empty\n");
	}
	else
	{
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		printf("\nTop Is At:%d\n",ptr->rno);
	}
}