#include<stdio.h>
int main()
{
	int n,i;
	printf("ENTER A NUMBER : ");
	scanf("%d",&n);
	printf("THE MULTIPLICATION TABLE OF %d IS : "\n,n);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d"\n,n,i,n*i);
	}
	return 0;
}