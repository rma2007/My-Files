#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b ;
	printf("\nEnter two numbers:");
	scanf("%d,%d",&a,&b);
	if (a-b<6)
	printf("%d", a);
	else
	printf("%d", b);
	printf("%d", a+b);
	getch();
}
