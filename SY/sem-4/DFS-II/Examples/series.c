#include <stdio.h>

int main() 
{
    int n = 6;
    int sum = 0;

    // Printing the series
    for (int i = 1; i <= n; i++) 
    {
        if (i == 1)
        {
            printf("%d", i);
            sum += i;
        } 
        else if (i % 2 == 0) 
        {
            printf("+%d", i);
            sum += i;
        } 
        else 
        {
            printf("-%d", i);
            sum -= i;
        }
    }

    // Printing the calculation result
    printf("\nResult = %d", sum);

    return 0;
}