// Write a C program to read a phone number in 10 digits and display the last three digits.

#include<stdio.h>
int main()
{
	char n[11];
	printf("ENTER A 10-DIGIT PHONE NUMBER : ");
	scanf("%10s",&n);
	printf("THE LAST THREE DIGIT OF YOUR PHONE NUMBER IS : %c %c %c \n",n[7],n[8],n[9]);
	return 0;
}
