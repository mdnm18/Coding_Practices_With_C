#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z=1;
	printf("ENTER A NUMBER:");
	scanf("%d",&x);
	y=1;
	if(x<0)
	printf("DOES NOT EXIST");
	else
	{
		while(y<=x)
		{
			z*=y;
			y=y+1;
		}
		printf("FACTORIAL IS %d=%d",x,z);
	}
	return 0;
}