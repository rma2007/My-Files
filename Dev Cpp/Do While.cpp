#include<stdio.h>
int main()
{
	int i;
	printf("Enter value of i:");
	scanf("%i",&i);
	while(i!=0)
{
	printf("i = %d. \n",i);
	if(i>0)
	i--;
	else
	i++;
}
    printf("i = 0.\n");
    printf("Good bye!");
}
