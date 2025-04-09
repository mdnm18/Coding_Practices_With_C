//Write a C program to find quotient and remainder using arithmetic operators.
#include<stdio.h>
int main()
{
	int dividend, divisor, quotient, reminder;
	printf("ENTER THE DIVIDEND : ");
	scanf("%d",&dividend);
	printf("ENTER THE DIVISOR : ");
	scanf("%d",&divisor);
	quotient=dividend/divisor;
	reminder=dividend%divisor;
	printf("THE QUOTIENT IS : %d\n",quotient);
	printf("THE REMINDER IS : %d\n",reminder);
	return 0;
}