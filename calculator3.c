#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,s,i;
	printf("ENTER THE 1ST NUMBER:");
	scanf("%d",&a);
	printf("ENTER THE 2ND NUMBER:");
	scanf("%d",&b);
	printf(".......MANU......\n 1 for ADDITION\n 2 for SUBTRACTION\n 3 for MULTIPLICATION\n 4 for DIVITION\n ENTER YOUR CHOICE:");
	scanf("%d",&i);
	switch(i)
	{
		case 1:s=a+b;
						break;
		case 2:s=a-b;
						break;
		case 3:s=a*b;
						break;		
		case 4:s=a/b;
						break;
		default: printf("WRONG CHOICE");
						break;					
	}
	printf("THE RESULT IS %d",s);
	getch();
}