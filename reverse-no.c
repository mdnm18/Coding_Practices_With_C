
#include<conio.h>
int main()
{
	int n,lastdigit,rev=0;
	printf("ENTER THE NUMBER OF THE DIGIT:");
	scanf("%d",&n);
	while(n!=0)
	{
		lastdigit=n%10;
		rev=(rev*10)+lastdigit;
		n/=10;
	}
	printf("REVERSE OF THE %d IS : %d",n,rev);
	return 0;
}

/*
#include<stdio.h>
int main()
{
	int n;
	int lastdigit;
	printf("ENTER A NUMBER TO GENERATE ITS REVERSE FORM : ");
	scanf("%d",&n);
	printf("THE REVERSE FORM OF %d IS : ",n);
	while(n!=0)
	{
		lastdigit=n%10;
		printf("%d",lastdigit);
		n/=10;
	}
	return 0;
}
*/























