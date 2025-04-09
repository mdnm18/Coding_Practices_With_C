// Sum of odd position digits & even position digits of a given number using array in c : 
#include <stdio.h>
#include <string.h>
int main() 
{
    char number[100];
    int oddSum = 0, evenSum = 0;
    printf("Enter a number: ");
    scanf("%s", number);
    int length = strlen(number);
    for (int i = 0; i < length; i++) 
	{
        int digit = number[i] - '0'; // Convert char to int
        if ((i + 1) % 2 == 0) 
		{
            evenSum += digit; // Even position
        }
		else 
		{
            oddSum += digit; // Odd position
        }
    }
    printf("Sum of digits at odd positions: %d\n", oddSum);
    printf("Sum of digits at even positions: %d\n", evenSum);
    return 0;
}
