/*
// work in turbo c : 
#include<stdio.h>
#include <conio.h>  
#include <dos.h>   
int main()
{
    int i;
    clrscr();
    textbackground(RED);
    textcolor(BLUE);
    for (i = 1; i <= 120; i++) 
	{
        cprintf(" I LOVE YOU ! <3 ");
        delay(200);
    }
    return 0;
}
*/

/*
#include <stdio.h>
#include <unistd.h>  // For usleep()

int main() {
    for (int i = 1; i <= 120; i++) {
        printf("\033[44;31m I LOVE YOU ! <3 \033[0m\n");  // 44 for blue background, 31 for red text
        usleep(2);  // 200 milliseconds
    }
    return 0;
}
*/
/*#include <stdio.h>
#include <unistd.h> // For sleep() function
int main() {
    int i;
    for (i = 1; i <= 5; i++) {
        printf(" I LOVE YOU ! ❤ ");
        fflush(stdout); 
        sleep(1); 
    }
       return 0;
}
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <unistd.h>
int main()
{
	char a;
	printf("TO AISA HAI KI :- \n");
		printf("PRESS 'ENTER'...................................");
		scanf("%c",&a);
	system("cls");
	printf("Mujhe na tumse kurti si muhabbat nahi, saree sa ishq chahiye.. Nahi samjhi?\n");
		printf("PRESS 'ENTER'...................................");
		scanf("%c",&a);
	system("cls");
	printf("Mujhe, jaldabazi mein pehna hua nishchay nai, itminan se bandha hua ishq chahiye..\n");
		printf("PRESS 'ENTER'...................................");
		scanf("%c",&a);
	system("cls");
	printf("Mujhe nazro ke saamne milne vala nahi, almari mein kahi sambhaal ke rakha hua ishq chahiye..\n");
		printf("PRESS 'ENTER'...................................");
		scanf("%c",&a);
	system("cls");
	printf("Mujhe tumhare dosto ki tareefo vala nahi, Par tumhari maa ki chupi kahaniyon vala ishq chahiye..\n");
		printf("PRESS 'ENTER'...................................");
		scanf("%c",&a);
	system("cls");
	printf("Mujhe kurti ke nayepan si sahuliyat nahi, Par saree ka saalon ka thehraav aur gehrapan chahiye..\n");
		printf("PRESS 'ENTER'...................................");
		scanf("%c",&a);
	system("cls");
	printf("Mujhe aasani se sulajhane vala nahi, Balki, parat dar parat ulajhti paheli vala ishq chahiye..\n");
		printf("PRESS 'ENTER'...................................");
		scanf("%c",&a);
	system("cls");
	printf("Aur Mujhe saralta se hothon ko chune vala nahi, balki, kamar pe haq se haath rakhne vala ishq chahiye..\n");
		printf("PRESS 'ENTER'...................................");
		scanf("%c",&a);
	system("cls");
	int i;
	printf("I WANT TO WALK WITH YOU AS YOUR SHADOW FOR THE REST OF MY LIFE \n");
    for (i = 1; i <= 3; i++)
	{
        printf("WOULD YOU LIKE TO BE MY COMPANION IN MY RUN CHASE ?\n");
        fflush(stdout); 
        sleep(1);
	}
	return 0;
}

























