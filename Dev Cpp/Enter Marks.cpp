#include<stdio.h>
#include<conio.h>
int main()
{
	int Marks;
	printf("\nEnter your Marks:");
	scanf("%d",&Marks);
	if(100>Marks,Marks>=80)
	printf("\nGrade A1");
	else if(80>Marks,Marks>=70)
	printf("\nGrade A");
	else if(70>Marks,Marks>=60)
	printf("\nGrade B");
	else if(60>Marks,Marks>=50)
	printf("\nGrade C");
	else if(50>Marks,Marks>=40)
	printf("\nGrade D");
	else
	printf("\nFAIL");
	getch();
}
