// TO PRINT ALL EVEN NUMBERS FROM 1 TO n :
#include<stdio.h>
int main()
{
	int n;
	printf("ENTER THE UPPER LIMIT : ");
	scanf("%d",&n);
	for(int i=2;i<=n;i+=2)
	{
		printf("%d\n",i);
	}
	return 0;
}
