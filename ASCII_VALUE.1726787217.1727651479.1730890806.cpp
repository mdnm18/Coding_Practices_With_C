//  Read a character and display an equivalent ASCII value.
#include <stdio.h>
#include<ctype.h>
int main() 
{
    char inputChar;
    printf("ENTER ANY ALPHABET OR DIGIT TO GENERATE ITS ASCII VALUE : ");
    scanf("%c",&inputChar);
    if(isalpha(inputChar) || isdigit(inputChar))
    {
         printf("THE ASCII VALUE OF %c IS : %d", inputChar, inputChar);
    }
    else
    {
        printf("Invalid input: Not a digit or letter");
    }
    return 0;
}