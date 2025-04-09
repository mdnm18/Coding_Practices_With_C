#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	printf("ENTER THE LAST NUMBER:");
	scanf("%d",&z);
	for(x=1;x<=z;x++)
	{
		for(y=1;y<=x;y++)
		printf("*");
		printf("\n");
	}
	getch();
}