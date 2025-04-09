#include<stdio.h>
int main()
{
	char naam[20];
	printf("ENTER YOUR NAME : ");
	scanf("%s",&naam);
	int n;
	printf("ENTER THE NUMBER : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("%s\n",naam);
	}
	return 0;
}


