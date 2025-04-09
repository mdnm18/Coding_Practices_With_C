// Write a program to read a number from the user and remove the last digit and display the result.
#include<stdio.h>
int main()
{
	int n;
	printf("ENTER A NUMBER : ");
	scanf("%d",&n);
	int lastdigit_removal=n/10;
	printf("THE ENTERED NUMBER WITHOUT ITS LAST DIGIT : %d",lastdigit_removal);
	return 0;
}
