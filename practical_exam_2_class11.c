#include<stdio.h>
int main()
{
	int x[20],i,s=0;
	printf("ENTER THE VALUE");
	for(i=0;i<20;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<20;i++)
	{
		s=s+x[i];
	}
	printf("RESULT IS=%d",s);
	return 0;
}