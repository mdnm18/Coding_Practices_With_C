#include<stdio.h>
int main()
{
	int n, r,sum=0, temp;
	printf("ENTER THE NUMBER: ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
//		sum=sum+(r*r*r);
		sum+=r*r*r;
		n=n/10;
	}
	if (temp==sum)
	printf("ARMSTRONG NUMBER");
	else
	printf(" NOT ARMSTRONGE NUMBER");
	return 0;
}