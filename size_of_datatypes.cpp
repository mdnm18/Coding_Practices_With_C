// Write a program to print the size of char, float, double and long double data types in C.
#include<stdio.h>
int main()
{
	printf("THE SIZE OF 'CHAR' DATA TYPE : %zu BYTE\n",sizeof(char));
	printf("THE SIZE OF 'FLOAT' DATA TYPE : %zu BYTES\n",sizeof(float));
	printf("THE SIZE OF 'DOUBLE' DATA TYPE : %zu BYTES\n",sizeof(double));
	printf("THE SIZE OF 'LONG DOUBLE' DATA TYPE : %zu BYTES\n",sizeof(long double));
	return 0;
}

