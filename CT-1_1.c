// You are assigned to create a program for a school that calculates the average marks of students in a class.
//#include<stdio.h>
//int main()
//{
//	
//    int num_std,i;
//    double avg, sum=0.0;
//    printf("ENTER THE TOTAL NUMBER OF STUDENT :");
//    scanf("%d",&num_std);
//    double marks[num_std];
//    for(i=0; i<num_std; i++)
//    {
//        printf("ENTER MARK FOR SUBLECT- %d :",i+1);
//        scanf("%lf",&marks[i]);
//        sum+=marks[i];
//    }
//    avg=sum/num_std;
//    printf("THE AVERAGE MARKS OF STUDENT IN A CLASS IS : %lf",avg);
//    return 0;
//}

// Write a C program that checks two given temperatures and returns true if one temperature is  less than 0 and the other is greater than 100, otherwise, it returns false.
//#include<stdio.h>
//#include<stdbool.h>
//bool temparatures(double t1, double t2)
//{
//	return (t1<0 && t2>100) || (t1>100 && t2<0);
//}
//int main()
//{
//	double t1, t2;
//	printf("ENTER THE 1ST TEMP : ");
//	scanf("%d",&t1);
//	printf("ENTER THE 2ND TEMP : ");
//	scanf("%d",&t2);
//	if(temparatures(t1,t2))
//	{
//		printf("TRUE!\n");
//	}
//	else
//	{
//		printf("FALSE!\n");
//	}
//	return 0;
//}

//You are working on a banking application that requires a feature to help customers track their daily expenses. The program should allow users to input their daily expenses one at a time. When the user enters a negative value, it indicates that they have finished entering expenses for the day. Implement using a C program to calculate and display the total amount spent.

//#include<stdio.h>
//int main()
//{
//	float daily_expenses, total_expenses=0.0;
//	printf("ENTER YOUR DAILY EXPENSES (ENTER NEGATIVE VALUE TO FINISH) : \n");
//	while(1)
//	{
//		printf("ENTER EXPENSES : ");
//		scanf("%f",&daily_expenses);
//		if(daily_expenses<0)
//		{
//			break;
//		}
//		total_expenses+=daily_expenses;
//	}
//	printf("THE TOTAL EXPENSES OF THE DAY : %.2f\n",total_expenses);
//	return 0;
//}

//● Read yesterday’s and today’s temperature ● Find the difference ● Using an operator print “Increase” if today’s temperature is higher and print “Decrease” otherwise.

//#include<stdio.h>
//int main()
//{
//	float yes_temp=0.0, to_temp=0.0;
//	printf("ENTER YESTERDAY'S TEMPARATURE : \n");
//	scanf("%f",&yes_temp);
//	printf("ENTER TODAY'S TEMPARATURE :\n");
//	scanf("%f",&to_temp);
//	(to_temp>yes_temp)? printf("INCREASE!\n"): printf("DECREASE!\n");
//	return 0;
//}

//A company calculates the salary of an employee based on the category of the employee. For daily wage employees, their salary is based on the number of hours worked and the rate per hour. On the other hand, regular employees have a more structured salary calculation, which takes into account several components such as basic pay, allowances, and additional benefits. For example, a regular employee’s salary includes a fixed basic pay, which is then increased based on factors like a predefined percentage of Dearness Allowance (DA), a specific House Rent Allowance (HRA), and a medical allowance. Each of these components contributes to the final salary calculation. the correct calculation is applied based on the employee type, with the appropriate salary elements factored in for each type of employee.

#include<stdio.h>
int main()
{
	
}






























