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

void create(dnode *);
void display(dnode *);
void insertf(dnode *);
void insertl(dnode *);
void inserta(dnode *);
void deletef(dnode *);
void deletel(dnode *);
void deletea(dnode *);
void searchn(dnode *);
void updaten(dnode *);
void destroyn(dnode *);
void mergen(dnode *,dnode *);
void exit();

void main()
{
	int j;
	printf("1.Create Node");
	printf("\n2.Display");
	printf("\n3.Exit");
	printf("\n4.Insert First Node");
	printf("\n5.Insert Last Node");
	printf("\n6.Insert At Any Node");
	printf("\n7.Delete First Node");
	printf("\n8.Delete Last Node");
	printf("\n9.Delete At Any Node");
	printf("\n10.Search Nord");
	printf("\n11.Update Nord");
	printf("\n12.Destroy Nord");
	printf("\n13.Count Nords");
	printf("\n14.Merge Nords");
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
		case 4:
			insertf(lp);
			display(lp);
			break;
		case 5:
			insertl(rp);
			display(lp);
			break;
		case 6:
			inserta(lp);
			display(lp);
			break;
		case 7:
			deletef(lp);
			display(lp);
			break;
		case 8:
			deletel(rp);
			display(lp);
			break;
		case 9:
			deletea(lp);
			
			display(lp);
			break;
		case 10:
			searchn(lp);
			break;
		case 11:
			updaten(lp);
			display(lp);
			break;
		case 12:
			destroyn(lp);
			break;
		case 13:
			printf("Total Node Is:%d\n",count);
			break;
		case 14:
			mergen(lp,rp);
			display(lp);
			break;
		default:
			printf("Invalid Choice\n");
			break;
	}
	main();
}

void create(dnode *ptr)
{
	char ch;
	count=0;
	lp->pre=NULL;
	do
	{
		printf("Enter Rno:");
		scanf("%d",&ptr->rno);
		count++;
		printf("Continue (y/n)---->");
		scanf("%s",&ch);
		
		if(ch=='y' || ch=='Y')
		{
			ptr->next=(dnode *)malloc(sizeof(dnode));
			ptr->next->pre=ptr;
			ptr=ptr->next;
		}
	}while(ch=='y' || ch=='Y');
	ptr->next=NULL;
	rp=ptr;
}

void display(dnode *ptr)
{
	while(ptr!=NULL)
	{
		printf("Rno->%d",ptr->rno);
		printf("\n");
		ptr=ptr->next;
	}
}

void insertf(dnode *ptr)
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
		new1->next=ptr;
		ptr->pre=new1;
		lp=new1;
		count++;
	}
}

void insertl(dnode *ptr)
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
		new1->pre=ptr;
		ptr->next=new1;
		rp=new1;
		count++;
	}
}

void inserta(dnode *ptr)
{
	int j; // used for conditions
	int k; // used for the search value
	dnode *new1; // used to enter new nord
	
	if(ptr==NULL)
	{
		printf("List IS Empty\n");
	}
	else
	{
		printf("\n1.Insert Before Rno");
		printf("\n2.Insert After Rno");
		printf("\nChoose Condition: ");
		scanf("%d",&j);	
		if(j==1)
		{
			printf("Enter Rno Befor You want to insert: ");
			scanf("%d",&k);
			while(ptr!=NULL && ptr->rno!=k)
			{
				ptr=ptr->next;
			}
			if(ptr==NULL && ptr->rno!=k)
			{
				printf("Search Value Not Found\n");
			}
			else if(ptr==lp && ptr->rno==k)
			{
				insertf(lp);
			}
			else
			{
				new1=(dnode *)malloc(sizeof(dnode));
				printf("Enter New Rno: ");
				scanf("%d",&new1->rno);
				count++;
				new1->next=ptr;
	            new1->pre=ptr->pre;
	            ptr->pre->next=new1;
	            ptr->pre=new1;
			}
		}
		else if(j==2)
		{
			printf("Enter Rno After You want to insert: ");
			scanf("%d",&k);
			while(ptr!=NULL && ptr->rno!=k)
			{
				ptr=ptr->next;
			}
			if(ptr==NULL)
			{
				printf("Search Value Not Found\n");
			}
			else if(ptr==rp && ptr->rno==k)
			{
				insertl(rp);
			}
			else
			{
				new1=(dnode *)malloc(sizeof(dnode));
				printf("Enter New Rno: ");
				scanf("%d",&new1->rno);
				count++;
				ptr->next->pre=new1;
				new1->next=ptr->next;
				new1->pre=ptr;
				ptr->next=new1;
			}	
		}	
		else
		{
			printf("Invalid Choice\n");
		}	
	}
}

void deletef(dnode *ptr)
{
	if(ptr==NULL)
	{
		printf("List Is Empty\n");
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
			lp=lp->next;
			lp->pre=NULL;
			free(ptr);
			count--;
		}
	}
}

void deletel(dnode *ptr)
{
	if(ptr==NULL)
	{
		printf("List Is Empty\n");
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

void deletea(dnode *ptr)
{
	int j; // used for conditions
	int k; // used for the search value
	if(ptr==NULL)
	{
		printf("List IS Empty\n");
	}
	else
	{
		printf("\n1.Delete Before Rno");
		printf("\n2.Delete After Rno");
		printf("\n3.Delete At the Position Which is Enterd To Search");
		printf("\nChoose Condition: ");
		scanf("%d",&j);	
		if(j==1)
		{
			printf("Enter Rno Befor You want to delete: ");
			scanf("%d",&k);
			while(ptr!=NULL && ptr->rno!=k)
			{
				ptr=ptr->next;
			}
			if(ptr==NULL)
			{
				printf("Search Value Not Found\n");
			}
			else if(ptr==lp && ptr->rno==k)
			{
				printf("Search Value Is Found But There No Node Before Search\n");
			}
			else if(ptr->pre->pre==NULL && ptr->rno==k)
			{
				ptr=ptr->pre;
				lp=lp->next;
				lp->pre=NULL;
				rp=lp;
				free(ptr);
				count--;
			}
			else
			{
				ptr=ptr->pre;
				ptr->pre->next=ptr->next;
				ptr->next->pre=ptr->pre;
				count--;
			}
		}
		else if(j==2)
		{
			printf("Enter Rno After You want to delete: ");
			scanf("%d",&k);
			while(ptr!=NULL && ptr->rno!=k)
			{
				ptr=ptr->next;
			}
			if(ptr==NULL)
			{
				printf("Search Value Not Found\n");
			}
			else if(ptr==rp && ptr->rno==k)
			{
				printf("Search Value Is Found But There Is no Node After Search\n");
			}
			else if(ptr->next->next==NULL && ptr->rno==k)
			{
				ptr=ptr->next;
				lp->next=NULL;
				rp=lp;
				free(ptr);
				count--;
			}
			else
			{
				ptr=ptr->next;
				ptr->pre->next=ptr->next;
				ptr->next->pre=ptr->pre;
				free(ptr);
				count--;
			}
		}
		else if(j==3)
		{
			printf("Enter Rno  You want to delete: ");
			scanf("%d",&k);
			while(ptr!=NULL && ptr->rno!=k)
			{
				ptr=ptr->next;
			}
			if(ptr==NULL)
			{
				printf("Search Value Not Found\n");
			}
			else
			{
				if(ptr==lp)
				{
					deletef(lp);
				}
				else if(rp==lp)
				{
					lp=rp=NULL;
					free(ptr);
					count--;
				}
				else if(ptr==rp)
				{
					deletel(rp);
				}
				else
				{
					ptr->next->pre=ptr->pre;
					ptr->pre->next=ptr->pre;
					free(ptr);
					count--;	
				}
			}
		}
		else
		{
			printf("Invalid Choice\n");
		}
	}
}

void searchn(dnode *ptr)
{
	int k;
	if(ptr==NULL)
	{
		printf("List is Empty \n");
	}
	else
	{
		printf("Enter Value You Want To Search: ");
		scanf("%d",&k);
		while(ptr!=NULL && ptr->rno!=k)
		{
			ptr=ptr->next;
		}
		if(ptr==NULL)
		{
			printf("Search Is Not Found \n");
		}
		else
		{
			printf("Search Is Founded:%d\n",ptr->rno);
		}
	}
}

void updaten(dnode *ptr)
{
	int k;
	if(ptr==NULL)
	{
		printf("List is Empty \n");
	}
	else
	{
		printf("Enter Value You Want To Search: ");
		scanf("%d",&k);
		while(ptr!=NULL && ptr->rno!=k)
		{
			ptr=ptr->next;
		}
		if(ptr==NULL)
		{
			printf("Search Is Not Found \n");
		}
		else
		{
			printf("Enter Value You Want To update: ");
			scanf("%d",&ptr->rno);
		}
	}
}

void destroyn(dnode *ptr)
{
	if(ptr==NULL)
	{
		printf("List Is Empty\n");
	}
	else
	{
		while(ptr!=NULL)
		{
			lp=lp->next;
			free(ptr);
			ptr=lp;
		}
		if(lp==NULL)
		{
			rp=NULL;
		}
	}
	count=0;
}

void mergen(dnode *old_lp,dnode *old_rp)
{
	int count1=0;
	dnode *new_lp=NULL;
	dnode *new_rp=NULL;
	dnode *ptr;
	char ch;
	new_lp=(dnode *)malloc(sizeof(dnode));
	ptr=new_lp;
	ptr->pre=NULL;
	do
	{
		printf("Enter Rno:");
		scanf("%d",&ptr->rno);
		count++;
		printf("Continue (y/n)---->");
		scanf("%s",&ch);
		count1++;
		
		if(ch=='y' || ch=='Y')
		{
			ptr->next=(dnode *)malloc(sizeof(dnode));
			ptr->next->pre=ptr;
			ptr=ptr->next;
		}
	}while(ch=='y' || ch=='Y');
	ptr->next=NULL;
	new_rp=ptr;
	
	if(old_lp==NULL)
	{
		lp=new_lp;
		rp=new_rp;
		count=count1;
	}
	else
	{
		rp->next=new_lp;
		new_lp->pre=rp;
		rp=new_rp;
		count=count1+count;
	}
}
