#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	system("Color 09");
	float F,C;
	int N;
	printf("Program for Temperature conversion.\n");
	printf("\n1.Fahrenheit to Celsius.\n2.Celsius to Fahrenheit.\n\n");
	printf("Enter your choice:");
	scanf("%d",&N);
	if(N==1)
	{
		printf("\nEnter temperature in Fahrenheit:");
		scanf("%f",&F);
		C=((F-32)*5)/9;
		printf("\nTemperature in Celsius is %f",C);
	}
	else if(N==2)
	{
		printf("\nEnter temperature in Celsius:");
		scanf("%f",&C);
		F=1.8*C+32;
		printf("\nTemperature in Fahrenheit is %f",F);
	}
	else
	printf("Invalid command!");
    getch();
}
