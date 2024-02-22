#include<stdio.h>
#include<conio.h>
int main()
{
	int basic,house;
	printf("Program that reads basic pay and prints net pay of an employee.");
	printf("\nEnter the basic pay:");
	scanf("%d",&basic);
	if(basic<25000)
	{
		house=((basic*30)/100);
		printf("Net pay of employee is %d",basic+house);
	}
	else if((basic>=25000)&&(basic<=40000))
	{
		house=((basic*40)/100);
		printf("Net pay of employee is %d",basic+house);
	}
	else
	{
		house=((basic*50)/100);
		printf("Net pay of employee is %d",basic+house);
	}
	getch();
}
