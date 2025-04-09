#include<stdio.h>
#include<conio.h>
int main()
{
	int j,i;
	j=1;
	do
	{
		i=1;
		do
		{
			printf("%d*%d=%d \n",j,i,j*i);
			i++;
		}
		while(i<=10);
		printf(".......................\n");
		j++;
	}
	while(j<=12);
	return 0;
}