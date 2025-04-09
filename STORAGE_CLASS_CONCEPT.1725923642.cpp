// auto Storage Class : 
/*
#include<stdio.h>
void autoExample()
{	
	auto int a =10;
	printf("VALUE OF AUTO VARIABLE a : %d\n",a);
}
int main()
{
	autoExample();
	return 0;
}
*/
// register Storage Class : 
/*
#include<stdio.h>
void registerExample()
{	
	register int a =10;
	printf("VALUE OF REGISTER VARIABLE a : %d\n",a);
}
int main()
{
	registerExample();
	return 0;
}
*/
// static Storage Class : 
/*
#include<stdio.h>
void staticExample()
{	
	static int a =0;
	a++;
	printf("VALUE OF STATIC VARIABLE a : %d\n",a);
}
int main()
{
	staticExample();
	return 0;
}
*/
// extern Storage Class : 

#include<stdio.h>
extern int a=10;
void externExample()
{	
	printf("VALUE OF EXTERN VARIABLE a : %d\n",a);
}

int main()
{
	externExample();
	return 0;
}



























