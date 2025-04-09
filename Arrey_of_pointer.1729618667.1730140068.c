// ARREY OF POINTER :

#include <stdio.h>
int main() 
{
    // Array of pointers to char
    const char *names[] = {"Alice", "Bob", "Charlie", "Diana"};

    // Size of the array
    int size = sizeof(names) / sizeof(names[0]);

    // Print each name using the array of pointers
    for (int i = 0; i < size; i++) 
	{
        printf("%s\n", names[i]);
    }

    return 0;
}
