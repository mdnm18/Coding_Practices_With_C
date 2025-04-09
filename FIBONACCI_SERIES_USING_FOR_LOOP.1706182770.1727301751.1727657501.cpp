 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 	int a,b,c,i,n;
 	printf("HOW MANY DIGITS OF FIBONACCI SERIES YOU WANT TO CREAT :");
 	scanf("%d",&n);
 	a=0;
 	b=1;
 	printf("%d\n %d\n",a,b);
 	for(i=2;i<n;i++)
 			{
 				c=a+b;
				printf("%d\n",c);
				a=b;
				b=c;	
			}
	return 0;
 }