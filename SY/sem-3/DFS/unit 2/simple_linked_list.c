#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct list
{
	char data;
	struct list *next;
};

typedef struct list linked;

void main()
{
	linked *start,node1,node2,node3;
	int i;
	
	start=(struct list*)malloc(sizeof(linked));
	start=&node1;
	node1.data='a';
	node1.next=&node2;
	node2.data='b';
	node2.next=&node3;
	node3.data='c';
	node3.next=NULL;
	
	for(i=0;i<3;i++)
	{
		printf("Data: %c Next: %d",start->data,&start->next);
		printf("\n");
		start=start->next;
		
		printf("Press Enter key");
		getchar();
	}
	getch();
}
