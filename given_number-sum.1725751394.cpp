/*

#include<stdio.h>
void sum(int n)
{
	int add=0;
	int lastdigit=0;
	printf("THE SUM OF DIGITS OF YOUR GIVEN NUMBER : ");
	while(n>0)
	{
		lastdigit=n%10;
		add+=lastdigit;
		n/=10;
	}
	printf("%d",add);
}
int main()
{
	int n;
	printf("ENTER A NUMBER : ");
	scanf("%d",&n);
	sum(n);
	return 0;
}

*/
/*
#include <stdio.h>
int main() 
{
    int y;
    float x;
    printf("Solutions for x + y = xy:\n");
    for (y = 1; y <= 100; y++) 
	{ // Starting from y = 2 to avoid division by zero
        x = 1 + 1.0 / (y - 1);
        if (x == (int)x) 
		{ // Check if x is an integer
            printf("x = %d, y = %d\n", (int)x, y);
        }
    }
    return 0;
}
*/
//Write a C program to sum the digits of a number until the user enters a negative number. Use a do-while loop.
#include<stdio.h>
int main()
{
	int n,lastdigit,sum=0;
	do
	{
		printf("ENTER THE NUMBER (ENTER NEGATIVE TO EXIT) : \n");
		scanf("%d",&n);
		if(n<0)
		{
			break;
		}
		else
		{
			while(n!=0)
			{
				lastdigit=n%10;
				sum+=lastdigit;
				n/=10;
			}
			printf("Sum of the digits of entered number : %d\n",sum);
		}	
	}while(1);
	printf("PROGRAM TERMINATED!\n");
	return 0;
}



















