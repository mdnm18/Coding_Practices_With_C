#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
	//printf("a is :%d\n,b is :%d\n",*a,*b);
}
int main()
{
	int a,b;
	printf("ENTER THE 1ST NUMBER :");
	scanf("%d",&a);
	printf("ENTER THE 2ND NUMBER :");
	scanf("%d",&b);
	swap(&a,&b);
	printf("a is %d\n,b is %d\n",a,b);
	return 0;
}