/*#include<stdio.h>
#include<stdbool.h>
bool prime(int n)
{
	if(n<=1)
	{
		return false;
	}
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
int prime_no_range(int n)
{
	for(int i=2;i<=n;i++)
	{
		if(prime(i))
		{
			printf("%d\n",i);
		}
	}
	return 0;
}

int main()
{
	int a;
	printf("ENTER THE NUMBER : ");
	scanf("%d",&a);
	int prime_no_range(a);
	return 0;
}
*/
#include<stdio.h>C
#include<conio.h>
void prime(int n)
{
	if(n<=1)
	{
		printf("%d IS NEITHER A PRIME NOR A NON-PRIME NUMBER\n BECAUSE %d IS NOT DIVISIBLE BY TWO NUMBERS",n);
	}
	else
	{
		if(n==2 || n==3)
		{
			printf("%d IS A PRIME NUMBER",n);
		}
		else
		{
		/*	char isprime[100]="  ";
			for(int i=2; i<=n;i++)
			{
				isprime=(n%i==0)?printf("%d IS A NON-PRIME NUMBER",n):printf("%d IS A PRIME NUMBER",n);
			}
			printf(isprime);
		*/
		for(int i=2;i<=n;i++)
		{
			if(n%i==0)
			{
				printf("%d IS A NON-PRIME NUMBER");
			}
			else
			{
				printf("%d IS A PRIME NUMBER");
			}
		}
		}
	}
}
int main()
{
	int n;
	printf(": LETS CHECK A NUMBER IS EITHER PRIME OR NON-PRIME :\n");
	printf("ENTER A NUMBER : ");
	scanf("%d",&n);
	int prime(n);
	return 0;
}












