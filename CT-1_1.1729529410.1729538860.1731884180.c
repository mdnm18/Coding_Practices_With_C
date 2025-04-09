// You are assigned to create a program for a school that calculates the average marks of students in a class.
#include<stdio.h>
int main()
{
    int num_std, i;
    double marks[numb_std];
    double avg, sum=0.0;
    printf("ENTER THE TOTAL NUMBER OF STUDENT :");
    scanf("%d",&num_std);
    for(int i=0; i<num_std; i++)
    {
        printf("ENTER MARK FOR SUBLECT- %d :",i+1);
        scanf("%lf"&marks[i]);
        sum+=marks[i];
    }
    avg=sum/num_std;
    printf("THE AVERAGE MARKS OF STUDENT IN A CLASS IS : %lf",avg);
    return 0;
}