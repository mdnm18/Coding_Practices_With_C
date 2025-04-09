// Write a C program to demonstrate how Increment and Decrement Operators (Pre & Post) work.
#include<stdio.h>
int main()
{
	int a=10,b=10,x=10,y=10;
	printf("DEMONSTRATION OF PRE-INCREMENT & PRE-DECREMENT OPERATOR :\n");
		printf("BEFORE USE THIS TWO OPERATORS :\n" );
			printf("x=%d\n",x);
			printf("y=%d\n",y);
		printf("AFTER USE THIS TWO OPERATORS :\n" );
			++x;
			--y;
			printf("x=%d\n",x);
			printf("y=%d\n",y);
	printf("DEMONSTRATION OF POST-INCREMENT & POST-DECREMENT OPERATOR :\n");
		printf("BEFORE USE THIS TWO OPERATORS :\n" );
			printf("a=%d\n",a);
			printf("b=%d\n",b);
		printf("AFTER USE THIS TWO OPERATORS :\n" );
			a++;
			b--;
			printf("a=%d\n",a);
			printf("b=%d\n",b);
	return 0;
}