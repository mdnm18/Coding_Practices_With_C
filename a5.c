#include<stdio.h>
#include<conio.h>
int main()
{
	int a=10;
	loop: do
	{
		if(a==15)
		{
			a=a+1;
			goto loop;
		}
		printf("VALUE OF a:%d\n",a);
		a++;
	}
	while(a<20);
	return 0;
}
