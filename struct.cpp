#include<stdio.h>
#include<conio.h>

int main()
{
	struct student
		{
			char name[20];
			int roll;
			int marks;
	
		}s; 
	printf("ENTER YOUR NAME :");
	//gets(s.name);
	printf("ENTER YOUR ROLL NO. :");
	scanf("%d",&s.roll);
	printf("ENTER YOUR MARKS :");
	scanf("%d",&s.marks);
	printf("Name is: %s\n",s.name);
	printf("Roll is: %d\n",s.roll);
	printf("Marks is: %d",s.marks);
}
