#include<stdio.h>
#include<conio.h>
int main()
{
	int x;
	printf("ENTER YOUR TOTAL MARKS");
	scanf("%d",&x);
	if(x>=34&&x<=60)
	printf("YOUR GRADE IS B");
	else if(x>=61&&x>=70)
	printf("YOUR GRADE IS B+");
	else if(x>=71&&x>=80)
	printf("YOUR GRADE IS A");
	else if(x>=81&&x>=90)
	printf("YOUR GRADE IS A+");
	else if(x>=91&&x>=100)
	printf("YOUR GRADE IS AA");
	else 
	printf("SORRY, YOU ARE FAILED");
	getch();
}