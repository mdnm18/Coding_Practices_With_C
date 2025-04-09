#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,x,y;
	printf("ENTER THE FIRST NUMBER:");
	scanf("%d",&a);
	printf("ENTER THE SECOND NUMBER:");
	scanf("%d",&b);
	printf(".......MANU......\n 1 for ADDITION\n 2 for SUBTRACTION\n 3 for MULTIPLICATION\n 4 for DIVITION\n ENTER YOUR CHOICE:");
	scanf("%d",&x);
	if(x==1)
		y=a+b;   
	else if(x==2)  
		y=a-b;
	else if(x==3)
		y=a*b;
	else if(x==4)
		y=a/b;
	else 
		printf("YOU HAVE ENTERED WRONG INPUT");
		printf("THE RESULT IS %d",y);
		getch();
		exit(1);	
}