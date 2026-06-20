#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[100],i,p,n,t;
    printf("Enter The Number Of Elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter Element %d : ",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        t=a[i];
        p=i-1;
        while(p>=0 && a[p]<t)
        {
            a[p+1]=a[p];
            p=p-1;
        }
        a[p+1]=t;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}