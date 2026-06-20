#include<stdlib.h>
#include<stdio.h>

struct dlink
{
	int rno;
	struct dlink *next;
};

typedef struct dlink dnode;
dnode *lp=NULL;
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
void mergen(dnode *);
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
			insertl(lp);
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
			deletel(lp);
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
			mergen(lp);
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
			ptr=ptr->next;
		}
	}while(ch=='y' || ch=='Y');
	ptr->next=lp;
}

void display(dnode *ptr)
{
	if(ptr!=NULL)
	{
		while(ptr->next!=lp)
		{
			printf("Rno->%d",ptr->rno);
			printf("\n");
			ptr=ptr->next;
		}
		printf("Rno->%d",ptr->rno);
		printf("\n");	
	}
}

void insertf(dnode *ptr)
{
	dnode *new1;
	new1=(dnode *)malloc(sizeof(dnode));
	new1->next=new1;
	
	printf("Enter New Rno: ");
	scanf("%d",&new1->rno);
	
	if(ptr==NULL)
	{
		lp=new1;
		count++;
	}
	else
	{
		new1->next=lp;
		while(ptr->next!=lp)
		{
			ptr=ptr->next;
		}
		ptr->next=new1;
		lp=new1;
		count++;
	}
}

void insertl(dnode *ptr)
{
	dnode *new1;
	new1=(dnode *)malloc(sizeof(dnode));
	new1->next=new1;
	
	printf("Enter New Rno: ");
	scanf("%d",&new1->rno);
	
	if(ptr==NULL)
	{
		lp=new1;
		count++;
	}
	else
	{
		while(ptr->next!=lp)
		{
			ptr=ptr->next;
		}
		ptr->next=new1;
		new1->next=lp;
		count++;
	}
}

void inserta(dnode *ptr)
{
	int j;
	int k;
	dnode *ptr1;
	dnode *new1;
	new1=(dnode *)malloc(sizeof(dnode));

	if(ptr==NULL)
	{
		printf("List Is Empty\n");
	}
	else
	{
		printf("\n1.Insert Before Rno");
		printf("\n2.Insert After Rno");
		printf("\nChoose What You Want To do:");
		scanf("%d",&j);
		if(j==1)
		{
			printf("Enter Rno Before You Want To Insert: ");
			scanf("%d",&k);
			while(ptr->next!=lp && ptr->rno!=k)
			{
				ptr1=ptr;
				ptr=ptr->next;
			}
			if(ptr->next==lp && ptr->rno!=k)
			{
				printf("Search Not Found\n");
			}
			else if(lp->rno==k)
			{
				printf("Enter New Rno: ");
				scanf("%d",&new1->rno);
				count++;
				new1->next=ptr;
				while(ptr->next!=lp)
				{
					ptr=ptr->next;
				}
				ptr->next=new1;
				lp=new1;
			}
			else
			{
				printf("Enter New Rno: ");
				scanf("%d",&new1->rno);
				count++;
				ptr1->next=new1;
				new1->next=ptr;
			}
		}
		else if(j==2)
		{
			printf("Enter Rno After You Want To Insert: ");
			scanf("%d",&k);
			while(ptr->next!=lp && ptr->rno!=k)
			{
				ptr=ptr->next;
			}
			if(ptr->next==lp && ptr->rno!=k)
			{
				printf("Search Not Found");
			}
			else if(ptr->next==lp && ptr->rno==k)
			{
				printf("Enter New Rno: ");
				scanf("%d",&new1->rno);
				count++;
				ptr->next=new1;
				new1->next=lp;
			}
			else 
			{
				printf("Enter New Rno: ");
				scanf("%d",&new1->rno);
				count++;
				new1->next=ptr->next;
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
	dnode *ptr1;
	if(ptr==NULL)
	{
		printf("List Is Empty\n");
	}
	else
	{
		if(lp->next==lp)
		{
			lp=NULL;
			free(ptr);
			count--;
		}
		else
		{
			ptr1=lp;
			while(ptr1->next!=lp)
			{
				ptr1=ptr1->next;
			}
			lp=lp->next;
			ptr1->next=lp;
			free(ptr);
			count--;
		}
	}
}

void deletel(dnode *ptr)
{
	dnode *ptr1;
	
	if(ptr==NULL)
	{
		printf("List Is Empty\n");
	}
	else
	{
		if(lp->next==lp)
		{
			lp=NULL;
			free(ptr);
			count--;
		}
		else
		{
			while(ptr->next!=lp)
			{
				ptr1=ptr;
				ptr=ptr->next;
			}
			ptr1->next=lp;
			free(ptr);
			count--;
		}
	}
}

void deletea(dnode *ptr)
{
	int j; // used for conditions
	int k; // used for the search value
	dnode *ptr1;
	dnode *ptr2;
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
			while(ptr->next!=lp && ptr->rno!=k)
			{
				ptr1=ptr;
				ptr=ptr->next;
			}
			if(ptr->next==lp && ptr->rno!=k)
			{
				printf("Search Value Not Found\n");
			}
			else if(ptr->rno==k && ptr==lp)
			{
				printf("Search Value Is Found But There No Node Before Search\n");
			}
			else
			{
				if(ptr1==lp && ptr->rno==k)
				{
					while(ptr->next!=lp)
					{
						ptr=ptr->next;
					}
					lp=lp->next;
					ptr->next=lp;
					free(ptr1);	
					count--;
				}
				else
				{
					ptr2=lp;
					while(ptr2->next!=ptr1)
					{
						ptr2=ptr2->next;
					}	
					ptr2->next=ptr1->next;
					free(ptr1);
					count--;
				}
			}
		}
		else if(j==2)
		{
			printf("Enter Rno After You want to delete: ");
			scanf("%d",&k);
			while(ptr->next!=lp && ptr->rno!=k)
			{
				ptr=ptr->next;
			}
			if(ptr->next==lp && ptr->rno!=k)
			{
				printf("Search Value Not Found\n");
			}
			else if(ptr->rno==k && ptr->next==lp)
			{
				printf("Search Value Is Found But There No Node After Search\n");
			}
			else
			{	
				if(ptr->next->next==lp && ptr->rno==k)
				{
					ptr1=ptr->next;
					ptr->next=lp;
					free(ptr1);
					count--;	
				}
				else
				{
					ptr1=ptr->next;
					ptr->next=ptr1->next;
					free(ptr1);
					count--;	
				}
			}
		}
		else if(j==3)
		{
			printf("Enter Rno You want to delete: ");
			scanf("%d",&k);
			while(ptr->next!=lp && ptr->rno!=k)
			{
				ptr1=ptr;
				ptr=ptr->next;
			}
			if(ptr->next==lp && ptr->rno!=k)
			{
				printf("Search Value Not Found\n");
			}
			else
			{
				if(ptr==lp && ptr->rno==k)
				{
					deletef(lp);
				}
				else if(ptr->next==lp && ptr->rno==k)
				{
					deletel(lp);
				}
				else
				{
					ptr1->next=ptr->next;
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
		while(ptr->next!=lp && ptr->rno!=k)
		{
			ptr=ptr->next;
		}
		if(ptr->next==lp && ptr->rno!=k)
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
		while(ptr->next!=lp && ptr->rno!=k)
		{
			ptr=ptr->next;
		}
		if(ptr->next==lp && ptr->rno!=k)
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
	dnode *ptr1;
	dnode *ptr2;
	if(ptr==NULL)
	{
		printf("List Is Empty\n");
	}
	else
	{
		while(ptr->next!=lp)
		{
			ptr1=ptr->next;
			free(ptr);
			ptr=ptr1;
		}
		free(ptr);
		lp=NULL;	
		count=0;
	}
	
}

void mergen(dnode *old_lp)
{
	dnode *new_lp=NULL;
	dnode *ptr;
	char ch;
	int count1=0;
	
	new_lp=(dnode *)malloc(sizeof(dnode));
	ptr=new_lp;
	do
	{
		printf("Enter Rno:");
		scanf("%d",&ptr->rno);
		count1++;
		printf("Continue (y/n)---->");
		scanf(" %c",&ch);
		
		if(ch=='y' || ch=='Y')
		{
			ptr->next=(dnode *)malloc(sizeof(dnode));
			ptr=ptr->next;
		}
	}while(ch=='y' || ch=='Y');
	ptr->next=new_lp;
	
	if(old_lp==NULL)
	{
		lp=new_lp;
		ptr=lp;
		while(ptr->next!=new_lp)
		{
			ptr=ptr->next;
		}
		ptr->next=lp;
		count=count1;
	}
	else
	{
		ptr=old_lp;
		while(ptr->next!=lp)
		{
			ptr=ptr->next;
		}
		ptr->next=new_lp;
		ptr=new_lp;
		while(ptr->next!=new_lp)
		{
			ptr=ptr->next;
		}
		ptr->next=lp;
		count=count+count1;
	}
}
