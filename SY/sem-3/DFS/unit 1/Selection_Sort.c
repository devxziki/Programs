#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[100],c,p,n,d,t;
    printf("Enter the Size of Array:");
    scanf("%d",&n);
    for(c=0;c<n;c++)
    {
        printf("Enter element %d of first array:",c);
        scanf("%d",&a[c]);   
    }
    for(c=0;c<n-1;c++)
    {
        p=c;
        for(d=c+1;d<n;d++)
        {
            if(a[d]>a[p])
            {
                t=a[d];
                a[d]=a[p];
                a[p]=t;
            }
        }
        if(p!=c)
        {
            p=d;
        }
    }
    for(c=0;c<n;c++)
    {
        printf("%d ",a[c]);
    }
}