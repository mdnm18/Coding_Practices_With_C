// Write a program to print the size of char, float, double and long double data types in C.
/*
#include<stdio.h>
int main()
{
	printf("THE SIZE OF 'CHAR' DATA TYPE : %zu BYTE\n",sizeof(char));
	printf("THE SIZE OF 'FLOAT' DATA TYPE : %zu BYTES\n",sizeof(float));
	printf("THE SIZE OF 'DOUBLE' DATA TYPE : %zu BYTES\n",sizeof(double));
	printf("THE SIZE OF 'LONG DOUBLE' DATA TYPE : %zu BYTES\n",sizeof(long double));
	return 0;
}
*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("ENTER 1ST NUMBER l: ");
	scanf("%d",&a);
	printf("ENTER 2ND NUMBER l: ");
	scanf("%d",&b);
	printf("ENTER 3RD NUMBER l: ");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("%d is largest",a);
	}
	if(b>c && b>a)
	{
		printf("%d is largest",b);
	}
	else
	{
		printf("%d is largest",c);
	}
	return 0;
}