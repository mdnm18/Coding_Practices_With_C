#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//void max(int x, int y)
int max(int x,int y)
{
	if(x>y)
//	printf("%d is the largest number",x);
//	else 
//	printf("%d is the largest number",y);
	return x;
	return y;
}
int main()
{
//	int a,b;
	int a,b,c;
	printf("PLZ. ENTER THE FIRST NUMBER :");
	scanf("%d",&a);
	printf("PLZ. ENTER THE SECOND NUMBER :");
	scanf("%d",&b);
	c=max(a,b);
	system("cls");
	printf("%d is the biggest\n",c);
	printf("The screen has been cleared!");
	return 0;
}