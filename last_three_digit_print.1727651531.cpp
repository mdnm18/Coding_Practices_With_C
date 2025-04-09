// Write a C program to read a phone number in 10 digits and display the last three digits.

#include<stdio.h>
int main()
{
	char phoneNo[11];
	printf("ENTER YOUR 10 DIGIT PHONE NUMBER : ");
	scanf("%10s",&phoneNo);
	printf("THE LAST THREE DIGIT OF YOUR PHONE NUMBER IS : %c %c %c\n",phoneNo[7],phoneNo[8],phoneNo[9]);
	return 0;
}





