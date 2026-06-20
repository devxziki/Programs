#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=-3,b=5;

    printf("Value of ++a step 1 : %d\n", ++a);
    printf("Value of a-- step 2 : %d\n", a--);
    printf("Value of a++ step 3 : %d\n", a++);
    printf("Value of a-- step 4 : %d\n", a--);
    printf("Value of ++a step 5 : %d\n", ++a);
    printf("Value of b-- step 1 : %d\n", b--);
    printf("Value of b++ step 2 : %d\n", b++);
    printf("Final value of a : %d\n Final value of b : %d\n", a , b);

    return 0;
}