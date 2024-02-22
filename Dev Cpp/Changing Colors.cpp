#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	printf("Hi, How are you?");
	getch();
	printf("\nCheck this pattern out!(Press Enter)");
	printf("\n   .   ");
	printf("\n   .   ");
	printf("\n   .   ");
	printf("\n . . . ");
	printf("\n  ...  ");
	printf("\n   .   \n");
	getch();
	int i, j;
	for(i=1;i<50;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	printf("Press Enter key to change text color!");
	getch();
	system("Color 01");
	getch();
	system("Color 02");
	getch();
	system("Color 03");
	getch();
	system("Color 04");
	getch();
	system("Color 05");
	getch();
	system("Color 06");
	getch();
	system("Color 07");
	getch();
	system("Color 08");
	getch();
	system("Color 09");
	getch();
	system("Color 0A");
	getch();
	system("Color 0B");
	getch();
	system("Color 0C");
	getch();
	system("Color 0D");
	getch();
	system("Color 0E");
	getch();
	system("Color 0F");
	printf("\nBye!");
	printf("\nPress Enter key to exit program!");
	getch();
}
