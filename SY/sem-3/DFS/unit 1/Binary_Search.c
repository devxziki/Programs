#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[100],i,l,h,m,n,k;
    printf("Enter the Size of Array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d of first array:",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&k);
    l=0;
    h=n-1;
    m=(l+h)/2;
    while(l<=h)
    {
        if(a[m]<k)
        {
            l=m+1;
        }
        else if(a[m]==k)
        {
            printf("Element found at position %d",m+1);
            break;
        }
        else
        {
            h=m-1;
        }
        m=(l+h)/2;
    }
    if(l>h)
    {
        printf("Element not found");
    }
}