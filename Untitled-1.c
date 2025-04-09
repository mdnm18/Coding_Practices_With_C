#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	float avg,sum;
	printf("ENTER HOW MANY NUMBER YOU WANT TO AVERAGE :");
	scanf("%d",&n);
	float a[n];
	for(i=0;i<n;i++)
			{
			 scanf("%lf",&a[i]);
			 sum=sum+a[i];	
			}
	avg=float(sum/n);
	printf("AGERAGE IS :%lf",avg);
}
