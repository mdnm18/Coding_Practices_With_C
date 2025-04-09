// WRITE A C PROGRAM TO CONCATENATE TWO STRINGS : 
// a. without using strcat() :
//#include <stdio.h>
//int main() 
//{
//    char a[100];
//    printf("ENTER A WORD TO STORE THAT IN a[] string: ");
//    scanf("%s", a);
//    char b[100];
//    printf("ENTER A WORD TO STORE THAT IN b[] string: ");
//    scanf("%s", b);
//    int i = 0, j = 0;
//    while (a[i] != '\0') 
//	{
//        i++;
//    }
//    while (b[j] != '\0') 
//	{
//        a[i] = b[j];
//        i++;
//        j++;
//    }
//    a[i] = '\0';
//    printf("CONCATENATED FORM OF THAT TWO STRINGS: %s\n", a);
//    return 0;
//}
// b. using strcat() :
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[100];
//	printf("ENTER A WORD TO STORE THAT IN a[] string : ");
//	scanf("%s",&a);
//	char b[100];
//	printf("ENTER A WORD TO STORE THAT IN b[] string : ");
//	scanf("%s",&b);
//	printf("CONCATENATE FORM OF THAT TWO STRINGS : %s",strcat(a,b));
//	return 0;
//}


// WRITE A C PROGRAM TO REVERSE A STRING :
// a. without using strrev() :
//#include <stdio.h>
//#include <string.h>
//int main() 
//{
//    char a[100];
//    printf("ENTER A WORD : ");
//    scanf("%s", a);
//    int len = strlen(a);
//    char temp;
//    for (int i = 0; i < len / 2; i++) {
//        temp = a[i];
//        a[i] = a[len - 1 - i];
//        a[len - 1 - i] = temp;
//    }
//    printf("REVERSE FORM OF %s IS : %s\n", a, a);
//    return 0;
//}
// b. using strrev() :
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[100];
//	printf("ENTER A WORD : ");
//	scanf("%s",&a);
//	printf("REVERSE FORM OF %s IS : %s",a,strrev(a));
//	return 0;
//}


// WRITE A C PROGRAM TO COMPARE TWO STRINGS : 
// a. Without using strcmp() :
#include <stdio.h>
/*
int customStrcmp(char *str1, char *str2) 
{ 
	int i = 0; 
	while (str1[i] != '\0' && str2[i] != '\0') 
	{ 
		if (str1[i] != str2[i]) 
		{ 
			return str1[i] - str2[i]; 
		} 
		i++; 
	} 
	return str1[i] - str2[i];
}
*/
int customStrcmp(char *str1, char *str2) 
{
    while (*str1 && (*str1 == *str2)) 
	{
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}
int main() 
{
    char password[20];
    char correctPassword[20] = "nayaj";
    char quit[20] = "quit";
    while (1) 
	{
        printf("Enter your password (type 'quit' to exit): ");
        scanf("%s", password); 
        if (customStrcmp(password, quit) == 0) 
		{
            printf("Quitting the process. Access not granted.\n");
            break;
        } else if (customStrcmp(password, correctPassword) == 0) 
		{
            printf("Access granted.\n");
            break;
        } else 
		{
            printf("Incorrect password. Try again.\n");
        }
    }
    return 0;
}
// b. using strcmp() :
//#include <stdio.h> 
//#include <string.h> 
//int main()  
//{ 
//    char password[20]; 
//    char correctPassword[20] = "nayaj"; 
//    char quit[20] = "quit"; 
//    while (1)  
//    { 
//        printf("Enter your password (type 'quit' to exit): "); 
//        scanf("%s", password); 
//        if (strcmp(password, quit) == 0)  
//        { 
//            printf("Quitting the process. Access not granted.\n"); 
//            break; 
//        } 
//        else if (strcmp(password, correctPassword) == 0)  
//        { 
//            printf("Access granted.\n"); 
//            break; 
//        } 
//        else  
//        { 
//            printf("Incorrect password. Try again.\n"); 
//        } 
//    }
//	return 0;
//}


























