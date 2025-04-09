// Read a number from the user and multiply the last digit and the second last.
/*
#include<stdio.h>
int main()
{
	int n;
	int lastdigit=0;
	int secondlastdigit=0;
	printf("ENTER A NUMBER : ");
	scanf("%d",&n);
	lastdigit=n%10;
	secondlastdigit=(n/10)%10;
	int product=lastdigit*secondlastdigit;
	printf("THE PRODUCT BETWEEN LAST TWO DIGITS OF YOUR GIVEN NUMBER %d IS : %d",n,product);
	return 0;	
}
*/
// Read a number from the user and multiply the last any digits according to user.
#include<stdio.h>
int main()
{
	int n,lastdigits,product=1;
	printf("ENTER A NUMBER : ");
	scanf("%d",&n);
	printf("ENTER THE NUMBER OF LAST DIGIT TO MULTIPY : ");
	scanf("%d",&lastdigits);
	for(int i=1;i<=lastdigits;i++)
	{
		product*=n%10;
		n/=10;
	}
	printf("THE MULTIPLICATION IN BETWEEN LAST %d DIGITS IS : %d",lastdigits,product);
	return 0;
}