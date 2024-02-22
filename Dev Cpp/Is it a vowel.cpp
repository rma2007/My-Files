#include<stdio.h>
int main()
{
	char ch;
	printf("Program to find vowel.");
	printf("\n\aEnter a character:");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
		    printf("\nIt is a vowel!");
		break;
		default:
		    printf("\nIt is not a vowel!");		
	}
}
