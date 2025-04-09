// WRITE A C PROGRAM TO COPY CONTENT OF ONE ARRAY TO ANOTHER : 
#include <stdio.h>
#include<string.h>
int main() 
{
    char a[100];
    char b[100];
    printf("ENTER THE ELEMENTS INTO a[] ARRAY : ");
    scanf("%s",&a);
    strcpy(b,a);
    printf("THE COPIED ELEMENT FROM a[] TO b[] is : %s",b);
    return 0;
}