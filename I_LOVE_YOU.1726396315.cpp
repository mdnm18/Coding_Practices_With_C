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
#include <stdio.h>
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



