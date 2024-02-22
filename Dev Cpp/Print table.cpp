#include<stdio.h>
int main()
{
	int n,x;
	printf("Enter a number whose table is required:");
	scanf("%i",&n);
	for(x=1;x<=12;x++)
	printf("\n%d x %d = %d",x,n,x*n);
}
