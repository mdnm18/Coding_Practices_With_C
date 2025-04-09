// You are assigned to create a program for a school that calculates the average marks of students in a class.
#include<stdio.h>
int main()
{
	
    int num_std,i;
    double avg, sum=0.0;
    printf("ENTER THE TOTAL NUMBER OF STUDENT :");
    scanf("%d",&num_std);
    double marks[num_std];
    for(i=0; i<num_std; i++)
    {
        printf("ENTER MARK FOR SUBLECT- %d :",i+1);
        scanf("%lf",&marks[i]);
        sum+=marks[i];
    }
    avg=sum/num_std;
    printf("THE AVERAGE MARKS OF STUDENT IN A CLASS IS : %lf",avg);
    return 0;
}

// Write a C program that checks two given temperatures and returns true if one temperature is  less than 0 and the other is greater than 100, otherwise, it returns false.
#include<stdio.h>
#include<stdbool.h>
bool temparatures(double t1, double t2)
{
	return (t1<0 && t2>100) || (t1>100 && t2<0);
}
int main()
{
	double t1, t2;
	printf("ENTER THE 1ST TEMP : ");
	scanf("%d",&t1);
	printf("ENTER THE 2ND TEMP : ");
	scanf("%d",&t2);
	if(temparatures(t1,t2))
	{
		printf("TRUE!\n");
	}
	else
	{
		printf("FALSE!\n");
	}
	return 0;
}

//




