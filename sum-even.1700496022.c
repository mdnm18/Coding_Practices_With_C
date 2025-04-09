#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	y=0;
	x=2;
	while(x<=100)
	{
		if(x%2==0)
		{
			y=y+x;
			x=x+1;
		}
		else
		x=x+1;
	}
	printf("SUM IS %d",y);
	return 0;
}