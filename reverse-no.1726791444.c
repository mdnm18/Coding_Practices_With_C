#include<conio.h>
#include<math.h>
main()
{
	int i,n,z,r,s;
	s=0;
	printf("ENTER THE NUMBER OF THE DIGIT:");
	scanf("%d",&z);
	printf("ENTER THE NUMBER:");
	scanf("%d",&n);
	i=1;
	while(i<=z)
	{
		r=n%10;
		n=n/10;
		s=s*10+r;
		i=i+1;
	}
	printf("REVERSE OF THE NUMBER IS %d",s);
	printf("\n\n\n\npress any key to exit");
	getch();
	return 0;
}