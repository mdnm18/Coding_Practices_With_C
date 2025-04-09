#include<stdio.h>
int main()
{	char op;
	double first, second;
	printf("ENTER AN OPERATOR (+,-,*,/):");
	scanf("%c", &op);
	printf("ENTER TWO OPERANDS:");
	scanf("%lf %lf", &first, &second);
	switch(op)
	{	case'+':
			printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
			break;
		case'-':
			printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
			break;
		case'*':
			printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
			break;
		case'/':
			printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
			break;
		// operator doesn't match any case constant
		default:
			printf("ERROR! OPERATOR IS NOT CORRECT");
	}
	return 0;
}