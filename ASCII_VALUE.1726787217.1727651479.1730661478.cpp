//  Read a character and display an equivalent ASCII value.
#include<stdio.h>
int main()
{
	char ch;
	printf("ENTER ANY ALPHABET TO GENERATE ITS ASCII VALUE : ");
	scanf("%c",&ch);
	int num=ch;
	printf(" THE ASCII VALUE OF %c IS : %d",ch,num);
	return 0;
}