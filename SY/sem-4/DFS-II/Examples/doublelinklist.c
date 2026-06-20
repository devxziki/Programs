#include<stdio.h>
#include<stdlib.h>

struct dlink
{
	int rno;
	char name[100],address[100];
	struct dlink *pre;
	struct dlink *next;
};

typedef struct dlink dnode;
dnode *lp=0,*rp=0;

void create(dnode *);
void display(dnode *);
void exit();


void main()
{
	int j;
	while(1){
		printf("1.Create Node");
		printf("\n2.Display");
		printf("\n3.Exit");
		printf("\nChosse what you wanted to do:");
		scanf("%d",&j);
	
		switch(j)
		{
			case 1:
				lp=(dnode *)malloc(sizeof(dnode));
				create(lp);
				break;
			case 2:
				display(lp);
				break;
			case 3:
				exit(0);
		
			default:
				printf("Invalid Choice\n");
				break;
		}	
	}
}


void create(dnode *ptr)
{
	char ch;
	lp->pre=0;
	do
	{
		printf("Enter Student Rno:");
		scanf("%d",&ptr->rno);
		printf("Enter Studen Name:");
		scanf("%s",&ptr->name);
		getchar();
		getchar();
		printf("Enter Student Address:");
		scanf("%s",&ptr->address);
		getchar();
		getchar();
		printf("Continue (y/n)---->");
		scanf("%s",&ch);
		
		getchar();
		getchar();
		
		if(ch=='y' || ch=='Y')
		{
			ptr->next=(dnode *)malloc(sizeof(dnode));
			ptr->next->pre=ptr;
			ptr=ptr->next;
		}
	}while(ch=='y' || ch=='Y');
	ptr->next=0;
	rp=ptr;
}

void display(dnode *ptr)
{
	while(ptr!=NULL)
	{
		printf("Rno->%d",ptr->rno);
		printf("\n");
		printf("Name->%s",ptr->name);
		printf("\n");
		printf("Address->%s",ptr->address);
		printf("\n");
		printf("Previous Address is:%d ",ptr->pre);
		printf("\n");
		printf("Next Address is:%d ",ptr->next);
		printf("\n");
		printf("\n");
		ptr=ptr->next;
	}
}
