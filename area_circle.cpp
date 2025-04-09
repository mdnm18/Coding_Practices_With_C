/*
#include<stdio.h>
float circle(int r)
{
	float area;
	area=3.14f*r*r;
	return area;
}
int main()
{
	int r;
	printf("ENTER THE REDIUS OF A CIRCLE : ");
	scanf("%d",&r);
	printf("%.2f",circle(r));
	return 0;
	
}
*/
#include<stdio.h>
#define PI=3.14;
int r;
int main()
{
	float area;
	printf("ENTER THE REDIUS OF CIRCLE :  ");
	scanf("%d",&r);
	area=(float)(PI*r*r);
	printf("THE AREA OF A CIRCLE IS : %.2f",area);
	return 0;
}