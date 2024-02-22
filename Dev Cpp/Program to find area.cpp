#include <stdio.h>
#include <conio.h>
int main()
{
	int choice;
	float l, b;
	printf("\nProgram to find area from given input.\n");
	printf("\nEnter length and breadth in metres:");
	scanf("%f, %f",&l,&b);
	
	printf("\n\aArea=%6.2fm^2",l*b); //This will produce an alert sound when printing area.
	getch();
}
