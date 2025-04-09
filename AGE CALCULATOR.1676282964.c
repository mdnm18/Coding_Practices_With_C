#include<stdio.h>
int main()
{
	int d1,m1,y1,d2,m2,y2,r1,r2,r3;
	printf("===========\n");
	printf("                                                    AGE CALCULATOR                                               \n");
	printf("===========\n");
	printf("ENTER YOUR BIRTH DAY");
	scanf("%d",&d1);
	printf("ENTER YOUR BIRTH MONTH");
	scanf("%d",&m1);
	printf("ENTER YOUR BIRTH YEAR");
	scanf("%d",&y1);
	if((d1<1||d1>31)||
	(d2<1||d2>31)||
	(m1<1||m1>12)||
	(m2<1||m2>12)||
	(y1<0&&y2<0))
	{
		printf("ENTER VALID NUMBER:");
	}
	else{
			r3=y2-y1;
			if(d2>=1)
		
			{
				r1=d2-d1;
			}
	else{
			m2=m2-1;
			d2=d2+30;
			r1=d2-d1;
		}
	if(m2>=m1)
	{
		r2=m2-m1;
	}
	else{
			r3=r3-1;
			m2=m2+12;
			r2=m2-m1;	
		}
	printf("YOUR AGE IS %d day %d month %d year",r1,r2,r3);
	}
}