//Write a program to read and display n random numbers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
    int n;
    // Seed the random number generator with the current time
    srand(time(0));
    // Input: Read the number of random numbers to generate
    printf("Enter the number of random numbers: ");
    scanf("%d", &n);
    // Allocate array to store random numbers
    int randomNumbers[n];
    // Generate n random numbers and store in array
    printf("Generated Random Numbers:\n");
    for (int i = 0; i < n; i++) 
	{
        randomNumbers[i] = rand();
        printf("%d\n", randomNumbers[i]);
    }
    return 0;
}
