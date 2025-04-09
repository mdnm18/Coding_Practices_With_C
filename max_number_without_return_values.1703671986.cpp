#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void max(int x,int y, int z)
{
	if(x>y&&x>z)
	{
		printf("%d is the largest number\n",x);
	}
	else if(y>x&&y>z)
	{
		printf("%d is the largest number\n",y);
	}
	else
	{
		printf("%d is the largest number\n",z);
	}
	
}
int main()
{
	int a,b,c;
	printf("PLZ. ENTER THE FIRST NUMBER :");
	scanf("%d",&a);
	printf("PLZ. ENTER THE SECOND NUMBER :");
	scanf("%d",&b);
	printf("PLZ. ENTER THE THIRD NUMBER :");
	scanf("%d",&c);
	system("cls");
	max(a,b,c);
	printf("------------------------------------------\n");
	printf("The screen has been cleared!");
	return 0;
}





