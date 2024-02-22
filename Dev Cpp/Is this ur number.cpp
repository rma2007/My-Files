#include<stdio.h>
#include<conio.h>
int main()
{
	char C;
	float F;
	do
    {
    printf("Enter a number:");
	scanf("%f",&F);
    printf("Is %f Your number?",F);
    printf("\nYes(y) or No(n) : ");
    scanf("%c",&C);
	}
	while(C=='n');
	getch();
}
