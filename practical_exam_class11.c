#include<stdio.h>
#include<conio.h>
int main()
{
	int rows, columns, n=5;
	for(rows=1;rows<=n;rows++)
	{
		for(columns=1;columns<=rows;columns++)
		{
			printf("%d",columns);
		}
		printf("\n");
	}
	return 0;
}