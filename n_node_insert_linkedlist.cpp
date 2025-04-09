#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;	
}*header;
void createlist(int n);
//void insert_node_infornt();
void insert_node_end();
void display();
int main()
{
	int n;
	printf("ENTER THE NUMBER OF TOTAL NODE :");
	scanf("%d",&n);
	createlist(n);
	display();
//	insert_node_infornt();
	insert_node_end();
	printf("After insertion\n");
	display();
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
//void insert_node_infornt()
//{
//	int data;	//struct node *newnode;
//	newnode=(struct node*)malloc(sizeof(struct node));
//	if(newnode==NULL)
//	{
//	printf("UNABLE TO INSERT A NEW NODE AT BEGINNING OF PREVIOUS NODE.");
//	}
//	else 
//	{
//		printf("ENTER THE DATA OF NEW NODE :");
//		scanf("%d",&data);
//		newnode->data=data;
//		newnode->next=header;
//		header=newnode;
//		printf("DATA INSERTED SUCCESSFULLY!");
//	}
void insert_node_end()
{
	int data;
	struct node *newnode, *temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("UNABLE TO INSERT A NEW NODE AT THE END OF PREVIOUS NODE.");
		
	else 
	{
		printf("ENTER THE DATA OF NEW NODE WHICH WILL BE INSERTED AT THE END OF PREVIOUS NODE :");
		scanf("%d",&data);
		newnode->data=data;
		newnode->next=NULL;
		temp=header;
		while(temp->next!=NULL)
		{
		 temp=temp->next;
			
		temp->next=newnode;
		printf("DATA INSERTED SUCCESSFULLY!");			
		}	
}
void display()
{
	while(p!=NULL)
	{
		p=p->next;	
	}
