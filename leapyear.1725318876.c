#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	printf("ENTER A YEAR");
	scanf("%d",&year);
	(year%4==0)?printf("THIS IS A LEAP YEAR"):printf("THIS IS NOT A LEAP YEAR");
	getch();
}