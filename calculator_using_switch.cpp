#include<stdio.h>
#include<conio.h>
int main()
{
	char x;
	double a,b,c;
	printf("ENTER OPERATOR +,-,*,/");
	scanf("%c",&x);
	printf("ENTER THE 1ST NUMBER");
	scanf("%lf",&a);
	printf("ENTER THE 2ND NUMBER");
	scanf("%lf",&b);
	switch(x)
	{
		case '+':
		c=a+b;
		printf("RESULT IS %.2lf",c);
		break;
		case '-':
		c=a-b;
		printf("RESULT IS %.2lf",c);
		break;
		case '*':
		c=a*b;
		printf("RESULT IS %.2lf",c);
		break;
		case '/':
		c=a/b;
		printf("RESULT IS %.2lf",c);
		break;
		default:
			printf("ERROR! OPERATOR IS NOT CORRECT");
	}
	return 0;	
}