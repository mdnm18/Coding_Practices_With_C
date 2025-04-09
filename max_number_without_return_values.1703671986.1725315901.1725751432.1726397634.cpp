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