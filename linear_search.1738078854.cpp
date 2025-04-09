#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a[5],i,n,temp=0;
	printf("Please enter five numbers to create an array.\n");
		for(i=0;i<5;i++)
				{
					scanf("%d",&a[i]);	
				}
	printf("The array is :\n");
				for(i=0;i<5;i++)
				{
					printf("%d\n",a[i]);
				}
	printf("ENTER THE DIGIT THAT YOU WANT TO FIND :");
	scanf("%d",&n);
	for(i=0;i<5;i++)
				{
					if(a[i]==n)
					temp=1;
				}		
	if(temp==1)
	printf("The number is present.");
	else
	printf("The number is not present.");
}