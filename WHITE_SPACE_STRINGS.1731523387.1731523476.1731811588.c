// FOR TAKE INPUT FROM USER WITH WHITE-SPACE STRINGS : 
#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
	printf("You entered: %s\n", str);
    return 0;
}
