#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[100],s,i,n;
    printf("Enter the Size of Array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d of first array:",i);
        scanf("%d",&a[i]);   
    }
    printf("Enter the element to be searched:");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            printf("Element found at position %d",i+1);
            break;
        }
    }
    if(i==n)
    {
        printf("Element not found");
    }
}