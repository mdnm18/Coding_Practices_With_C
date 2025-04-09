/*
//Right Half Pyramid of Stars
#include <stdio.h>
int main() {
    int rows = 5;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
*/
/*
//Full Pyramid of Numbers
#include <stdio.h>
int main() 
{
    int rows = 5, k = 0;
    for (int i = 1; i <= rows; ++i, k = 0) 
	{
        for (int space = 1; space <= rows - i; ++space) 
		{
            printf("  ");
        }
        while (k != 2 * i - 1) 
		{
            printf("%d ", i);
            ++k;
        }
        printf("\n");
    }
    return 0;
}
*/

//Inverted Half Pyramid of Numbers
#include <stdio.h>
int main() 
{
    int rows = 5;
    for (int i = rows; i >= 1; --i) 
	{
        for (int j = 1; j <= i; ++j) 
		{
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}



















