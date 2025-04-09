//Write a program to find  Sum of elements using 1D array;
#include <stdio.h>
int main() 
{
    int n, sum = 0;
    // Input: Read the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    // Declare array to store elements
    int array[n];
    // Input: Read elements into the array
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &array[i]);
    }
    // Calculate sum of elements
    for (int i = 0; i < n; i++) 
	{
        sum += array[i];
    }
    // Output the sum
    printf("The sum of the elements is: %d\n", sum);
    return 0;
}
