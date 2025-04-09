#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("ENTER THE 1ST NUMBER:");
	scanf("%d",&a);
	printf("ENTER THE 2ND NUMBER:");
	scanf("%d",&b);
	if(a>b)
	printf("LARGE NUMBER IS %d",a);
	else
	printf("LARGE NUMBER IS %d",b);
	return 0;
}