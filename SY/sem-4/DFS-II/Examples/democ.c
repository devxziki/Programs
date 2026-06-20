#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=5;
	int b=++a;
	int c=a++;
	
	printf("A=%d\n",a);
	printf("B=%d\n",b);
	printf("C=%d\n",c);
	
	return 0;
}
