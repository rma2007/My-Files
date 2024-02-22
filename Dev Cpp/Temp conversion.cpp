#include<stdio.h>
int main()
{
	float F,C;
	printf("Enter temperature in Celsius:");
	scanf("%f",&C);
	F=1.8*C+32;   //Formula for conversion.
	printf("Temperature in Farenheight is %f",F);
}
