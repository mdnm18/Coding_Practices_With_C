#include<stdio.h>
int main()
{
	int i;
	char a[20]="INDIAN";
	char b[20];
	printf("BEFORE CHANGING, a is %s\n",a);
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	b[i]='\0';
	printf("AFTER CHANGING, b is %s",b);
	
}
