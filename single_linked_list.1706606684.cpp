#include<stdio.h>
struct stud
{
	int roll;
	char name[30];
	int age;
	struct stud *next;
} n1,n2,n3,*p;
int main()
{
	printf("FOR THE FIRST TIME :\n");
	printf("ENTER THE ROLL NO:");
	scanf("%d",&n1.roll);
	printf("ENTER THE NAME:");
	scanf("%s",&n1.name);
	printf("ENTER THE AGE:");
	scanf("%d",&n1.age);
	
	printf("FOR THE SECOND TIME :\n");
	printf("ENTER THE ROLL NO: ");
	scanf("%d",&n2.roll);
	printf("ENTER THE NAME: ");
	scanf("%s",&n2.name); 
	printf("ENTER THE AGE: ");
	scanf("%d",&n2.age);
	
	printf("FOR THE THIRD TIME :\n");
	printf("ENTER THE ROLL NO: ");
	scanf("%d",&n3.roll);
	printf("ENTER THE NAME: ");
	scanf("%s",&n3.name);
	printf("ENTER THE AGE: ");
	scanf("%d",&n3.age);
	
	//scanf("%d %s %d",&n1.roll,&n1.name,&n1.age);
	//scanf("%d %s %d",&n2.roll,&n2.name,&n2.age);
	//scanf("%d %s %d",&n3.roll,&n3.name,&n3.age);
	n1.next=&n2;
	n2.next=&n3;
	n3.next=NULL;
	p=&n1;
	while(p!=NULL)
	{
		printf("Roll		Name			Age\n");
		printf("%d		",p->roll);
		printf("%s			",p->name);
		printf("%d\n",p->age);
		//printf("%d%s%d",p->roll,p->name,p->age);
		p=p->next;
	}
	
}