#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("plz enter the 1st no.");
	scanf("%d",&a);
	printf("plz enter the 2nd no.");
	scanf("%d",&b);
	printf("before swapping, the 1st no. is:%d\n",a);
	printf("before swapping, the 2nd mo. is:%d\n",b);
	c=a;
	a=b;
	b=c;
	printf("after swapping, the 1st no. is:%d\n",a);
	printf("after swapping, the 2nd mo. is:%d\n",b);
	return 0;
	getch();
	
}