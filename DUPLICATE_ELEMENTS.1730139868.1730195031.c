// WRITE A C PROGRAM TO FIND THE COUNT OF DUPLICATE ELEMENTS IN ARRAY.
#include<stdio.h>
#include<string.h>
int main()
{
	int n, count=0;
	printf("ENTER THE NO. OF ELEMENT : ");
	scanf("%d",&n);
	int arr[n];
	int dup_count[n];
	for(int i=0; i<n; i++)
	{
		printf("ENTER THE ELEMENT-%d : ",i+1);
		scanf("%d",&arr[i]);
		dup_count[i]=0;
	}
	for(int i=0; i<n; i++)
	{
		for(int j=(i+1); j<n; j++)
		{
			if(arr[i]==arr[j] && dup_count[i]==0)
			{
				dup_count[i]++;
			}
		}
		if(dup_count[i]>0)
		{
			count++;
		}
	}
	printf("Count of duplicate elements: %d\n",count);
	return 0;
}