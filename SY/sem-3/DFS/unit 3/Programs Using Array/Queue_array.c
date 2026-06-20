#include<stdio.h>
#include<stdlib.h>

int a[5];
int n=5;
int f=-1;
int r=-1;
int count=0;

void enQueue();
void display();
void deQueue();
void exit();

int main()
{
    int j;
    printf("\n1.Enqueue");
    printf("\n2.Display");
    printf("\n3.Exit");
    printf("\n4.deQueue");
    printf("\n5.Count Queue");
    printf("\nChoose What you want to do: ");
    scanf("%d",&j);

    switch(j)
    {
        case 1:
            enQueue();
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
        case 4:
            deQueue();
            break;
        case 5:
            printf("\nCount Of Queue Is:%d",count);
            break;
        default:
            printf("\nInvalid Choice");
    }
    main();
    return 0;
}

void enQueue()
{
    if(r==n-1)
    {
        printf("\nQueue Is Full\n");
    }
    else 
    {
        r++;
        printf("Enter Value:");
        scanf("%d",&a[r]);
        count++;
        if(f<0)
        {
            f=0;
        }
    }  
}

void display()
{
    int i;
    for(i=f;i<=r;i++)
    {
        printf("Value->%d",a[i]);
        printf("\n");
    }
}

void deQueue()
{
    if(f==-1)
    {
        printf("\nQueue Is Empty\n");
    }
    else
    {
        printf("\nDeleted VAlue is:%d",a[f]);
        f++;
        count--;
        if(f>r)
        {
            f=r=-1;
        }
    }
}