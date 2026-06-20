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
	printf("1.Push ");
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
            printf("Stack Size Is: %d\n",count);
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
	new1->next=new1->pre=new1;
	
	printf("Enter Value: ");
	scanf("%d",&new1->rno);
	
	if(ptr==NULL)
	{
		lp=rp=new1;
		count++;
	}
	else
	{
		ptr->next=new1;
		new1->next=lp;
		lp->pre=new1;
		new1->pre=ptr;
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
		while(ptr->next!=lp)
		{
			printf("Value->%d",ptr->rno);
			printf("\n");
			ptr=ptr->next;
		}	
		printf("Value->%d",ptr->rno);
		printf("\n");	
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
        printf("Deleted Top Is:%d\n",ptr->rno);
		if(lp==rp)
		{
			lp=rp=NULL;
			free(ptr);
			count--;
		}
		else
		{
			rp=rp->pre;
			rp->next=lp;
			lp->pre=rp;
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
     
        printf("\nTop Is At:%d\n",rp->rno);
    }
}