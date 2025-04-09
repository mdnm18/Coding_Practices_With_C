#include<stdio.h>
int main()
{
	float a,b;
	printf("ENTER OPERAND 1 : ");
	scanf("%f",&a);
	printf("ENTER OPERAND 2 : ");
	scanf("%f",&b);
	float s=a+b;
	printf("SUM IS : %f + %f = %f\n",a,b,s);
	float d=b-a;
	printf("DIFFERENCE IS : %f - %f = %f\n",b,a,d);
	float p=a*b;
	printf("PRODUCT IS : %f * %f = %f\n",a,b,p);
	float division=a/b;
	printf("RESULT OF DIVISION IS : %f / %f = %f",a,b,division);
	return 0;
}