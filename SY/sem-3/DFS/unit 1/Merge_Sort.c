#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[100],b[100],c[100],i,j,k,p=0,n,m,t,s;
    printf("Enter the size of first array:");
    scanf("%d",&n);
 
    for(i=0;i<n;i++)
    {
        printf("Enter element %d of first array:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        t=a[i];
        p=i-1;
        while(p>=0 && t>a[p])
        {
            a[p+1]=a[p];
            p=p-1;
        }
        a[p+1]=t;
    }
    printf("Enter the size of second array:");
    scanf("%d",&m);
    for(j=0;j<m;j++)
    {
        printf("Enter element %d of second array:",j);
        scanf("%d",&b[j]);
    }
    for(j=0;j<m;j++)
    {
        t=b[j];
        p=j-1;
        while(p>=0 && t>b[p])
        {
            b[p+1]=b[p];
            p=p-1;
        }
        b[p+1]=t;
    }
    i=j=k=0;
    while(i<n && j<m)
    {
        if(a[i]>b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<n)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    s=n+m;
    for(k=0;k<s;k++)
    {
        printf("%d ",c[k]);
    }
}