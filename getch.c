/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a;
	printf("ENTER A CHARACTER : ");
	a=getch();
	int b=a;
	system("cls");
	printf("ENTERED CHARACTER IS %c \n and it's ASCII VALUE IS : %d",a,b);	
}
*/
/*
#include <stdio.h>
int main()
{
	int num=10;
	char ch= 'g';
	float f=0.23;
	char str[50];
//scanf("%d", &num);
	printf("\nEntered integer is: %d\n", num);
//scanf("%f", &f);
	printf("\nEntered float is: %f\n", f);
//scanf("%c", &ch);
	printf("\nEntered character is: %c\n\n", ch);
	int a = 67;
	printf("Octal = %o\n\n", a);	
	int b = 154;
	printf("Hexadecimal = %x\n\n", b);
	char c[] = "Hi AN2 Students";
	printf("%s\n\n", c);
	printf("Address of variable 'a' is %p\n\n", &a);
	int d, e;
	printf(str, "a = %d and b = %d",a, b);
	scanf(str, "a = %d and b = %d", &d, &e);
	printf("d = %d and e = %d", d, e);
	return 0;
}
*/

#include <conio.h>
#include <stdio.h>
int main()
{
    printf("Enter any character: ");
    getch(); // Reads a character but not displays
    getche(); // Reads a character and displays immediately
    char ch;
    printf("\nEnter the character: ");
    ch = getchar(); // Taking a character from keyboard
    putchar(ch);
    char name[50];
    printf("\nEnter some texts: ");
    gets(name); // Reading a line of character or a string
    puts(name);
    return 0;
}



