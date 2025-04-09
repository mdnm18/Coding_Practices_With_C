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