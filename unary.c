/*
#include <stdio.h>
int main()
{
    int a = 10;
    printf("a=%d \n", a++);
    printf("b=%d \n", a);
    printf("c=%d \n", ++a);
    printf("d=%d \n", a);
    return 0;
}
*/

#include<stdio.h>
int main()
{
	int a=10, b=10;
	int c=a<<2;
	printf("%d\n",c);
	int d=b>>2;
	printf("%d",d);
	return 0;
}
