#include<stdio.h>
int main()
{
	int n,lastdigit,position=1;
	int evensum=0, oddsum=0;
	printf("ENTER A NUMBER : ");
	scanf("%d",&n);
	while(n!=0)
	{
		lastdigit=n%10;
		if(position%2==0)
		{
			evensum+=lastdigit;
		}
		else
		{
			oddsum+=lastdigit;
		}
		n/=10;
		position++;
	}
	printf("THE SUMMATION OF THOSE DIGITS WHICH ARE IN EVEN NUMBER POSITION : %d\n",evensum);
	printf("THE SUMMATION OF THOSE DIGITS WHICH ARE IN ODD NUMBER POSITION : %d\n",oddsum);
	return 0;
}