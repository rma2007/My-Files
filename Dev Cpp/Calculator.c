#include <stdio.h>
#include <conio.h>
void main(void)
{
	int choice;
	float x, y;
	printf("\nProgram to perform arithmetic operations.\n");
	
	printf("\nEnter 2 numbers:");
	scanf("%f, %f",&x,&y);
	
	printf("\n1. Addition");
	printf("\n2. Substraction");
	printf("\n3. Multiplication");
	printf("\n4. Division\n");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	
	if(choice==1)
	printf("\nSum=%6.2f",x+y);
	else if(choice==2)
	printf("\nDifference=%6.2f",x-y);
	else if(choice==3)
	printf("\nProduct=%6.2f",x*y);
	else if(choice==4)
	printf("\nQuotient=%6.2f",x/y);
	else
	printf("\nInvalid Command");
	getch();
}
