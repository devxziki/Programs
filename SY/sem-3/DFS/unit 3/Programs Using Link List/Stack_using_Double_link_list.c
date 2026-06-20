#include<stdio.h>
#include<stdlib.h>

struct dlink
{
	int rno;
	struct dlink *pre;
	struct dlink *next;
};

typedef struct dlink dnode;
dnode *lp=NULL,*rp=NULL;
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
			push(rp);
			break;
		case 2:
			display(lp);
			break;
		case 3:
			exit(0);
		case 4:
			pop(rp);
			break;
		case 5:
			peep(rp);
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
	new1->next=new1->pre=NULL;
	
	printf("Enter New Rno: ");
	scanf("%d",&new1->rno);
	
	if(ptr==NULL)
	{
		lp=rp=new1;
		count++;
	}
	else
	{
		printf("Top Is Deleted:%d\n",rp->rno);
		new1->pre=ptr;
		ptr->next=new1;
		rp=new1;
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
	if(ptr==NULL)
	{
		printf("Stack Is Empty\n");
	}
	else
	{
		if(lp==rp)
		{
			lp=rp=NULL;
			free(ptr);
			count--;
		}
		else
		{
			rp=rp->pre;
			rp->next=NULL;
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
		printf("Top Is:%d\n",ptr->rno);
	}
}