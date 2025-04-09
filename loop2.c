#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	printf("ENTER THE LAST NUMBER:");
	scanf("%d",&z);
	for(x=1;x<=z;x++)
	{
		for(y=z;y>=x;y--)
		printf("*");
		printf("\n");
	}
	getch();
}