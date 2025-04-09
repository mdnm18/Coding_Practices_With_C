/*
#include<stdio.h>
#include<conio.h>
void max()
{
	int x,y;
	if(x>y)
	printf("%d is the largest number",x);
	else 
	printf("%d is the largest number",y);
}
int main()
{
	int a,b;
	printf("PLZ. ENTER THE FIRST NUMBER :");
	scanf("%d",&a);
	printf("PLZ. ENTER THE SECOND NUMBER :");
	scanf("%d",&b);
	void max(a,b);
	return 0;
}
*/
// Write a C program to enter three numbers and find the greatest number.
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