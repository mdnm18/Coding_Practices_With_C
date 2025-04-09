#include<stdio.h>
//#include<conio.h>
#include<stdbool.h>
#include<stdlib.h>
int leap_year(int year)
{
    bool x=(year%4)==0;
    bool y=(year%100)!=0;
    bool z=((year%100)==0 && (year%400)==0);
	char r=(x&&(y||z))?printf("ENTERED YEAR IS LEAP YEAR"):printf("ENTERED YEAR IS NON-LEAP YEAR");
	return r;
}
int main()
{
	int year;
	printf(": LETS CHECK A YEAR IS EITHER LEAP YEAR OR NOT :\n ");
	printf("ENTER A YEAR : ");
	scanf("%d",&year);
	system("cls");
	leap_year(year);
	return 0;
}







