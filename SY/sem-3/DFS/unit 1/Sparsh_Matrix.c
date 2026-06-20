#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[100][100],i,j,col,row;
    printf("Enter the number of rows:");
    scanf("%d",&row);
    printf("Enter the number of columns:");
    scanf("%d",&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter element %d,%d of the matrix:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Value: %d Row: %d Column: %d",a[i][j],i,j);
            printf("\n"); 
        }
    }
}