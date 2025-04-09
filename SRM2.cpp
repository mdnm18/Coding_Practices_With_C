#include<stdio.h>
int main()
{
	int a,b;
	printf("ENTER OPERAND 1 : ");
	scanf("%d",&a);
	printf("ENTER OPERAND 2 : ");
	scanf("%d",&b);
	int s=a+b;
	printf("SUM IS : %d + %d = %d\n",a,b,s);
	int d=b-a;
	printf("DIFFERENCE IS : %d - %d= %d\n",b,a,d);
	int p=a*b;
	printf("PRODUCT IS : %d * %d = %d\n",a,b,p);
	int division=a/b;
	printf("RESULT OF DIVISION IS : %d / %d = %d",a,b,division);
	return 0;
}