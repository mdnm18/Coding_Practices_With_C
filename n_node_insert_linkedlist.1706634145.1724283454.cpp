#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;	
}*header;
void createlist(int n);
void display();
int main()
{
	int n;
	printf("ENTER THE NUMBER OF TOTAL NODE :");
	scanf("%d",&n);
	createlist(n);
	display();
	return 0;
}
void createlist(int n)
{
	struct node *newnode, *temp;
	int data, i;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("UNABLE TO ALLOCATE MEMORIES.");
	}
	else
	{
		printf("ENTER THE DATA OF NODE-1 :");
		scanf("%d",&data);
		newnode->data=data;
		newnode->next=NULL;
		header=newnode;
		temp=newnode;	
	}
	for(i=2;i<=n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		if(newnode==NULL)
			{
				printf("UNABLE TO ALLOCATE MEMORIES.");
			}
		else
			{
				printf("ENTER THE DATA OF NODE-%d :",i);
				scanf("%d",&data);
				newnode->data=data;
				newnode->next=NULL;
				temp->next=newnode;
				temp=temp->next;
			}		
	}
}
void display()
{
	struct node *p;
	p=header;
	printf("REVIEW YOUR DATA !\n");
	printf("		DATA\n");
	while(p!=NULL)
	{
		
		printf("		%d\n",p->data);
		p=p->next;
	}
}
