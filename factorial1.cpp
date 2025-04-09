#include<stdio.h>
int main()
{
	int f=1,i,n;
	printf("ENTER A NUMBER TO SEE ITS FACTORIAL : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f*=i;
	}
	printf("THE FACTORIAL OF %d IS : %d",n,f);
}