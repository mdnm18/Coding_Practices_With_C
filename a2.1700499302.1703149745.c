#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("ENTER THE 1ST NUMBER:");
	scanf("%d",&a);
	printf("ENTER THE 2ND NUMBER:");
	scanf("%d",&b);
	printf("ENTER THE 3RD NUMBER:");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
			printf("LARGE NUMBER IS %d",a);
		else
			printf("LARGE NUMBER IS %d",c);
	}
	else
	{
		if(b>c)
			printf("LARGE NUMBER IS %d",b);
		else
			printf("LARGE NUMBER IS %d",c);
	}
	return 0;	
}