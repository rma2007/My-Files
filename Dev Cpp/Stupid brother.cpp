#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a, b, c, d, e;
	system("Color 0F");
	printf("\t\t\t< ----- ---------------------------------------------------- ----- >\n");
	printf("\t\t\t< ----- Program to find out about your brother's Personality ----- >\n");
	printf("\t\t\t< ----- ---------------------------------------------------- ----- >\n");
	getch();
	system("cls");
	
	printf("Please answer the following questions to find out how is your brother like?\n(Press Enter to continue)\n");
	getch();
	
{
	//<-----Question 1----->
	printf("\nQ.1)What are his hobbies in his free time?");
	printf("\n1.Reading Books.");
	printf("\n2.Playing Outside.");
	printf("\n3.Roaming around.");
	printf("\n4.Watching TV.");
	printf("\n--->");
	scanf("%d",&a);
}

{
	//<-----Question 2----->
	printf("\nQ.2)Which subjects does he like?");
	printf("\n1.Maths.");
	printf("\n2.History.");
	printf("\n3.Computer.");
	printf("\n4.He doesn't study.");
	printf("\n--->");
	scanf("%d",&b);
}

{
	//<-----Question 3----->
	printf("\nQ.3)What sort of videos does he watch?");
	printf("\n1.Entertainment Videos.");
	printf("\n2.Dumb Videos.");
	printf("\n3.Paranormal Videos.");
	printf("\n4.DIY Videos.");
	printf("\n--->");
	scanf("%d",&c);
}

{
	//<-----Question 4----->
	printf("\nQ.4)What types of video games does he like?");
	printf("\n1.Open-World Survival.");
	printf("\n2.Horror Games.");
	printf("\n3.Puzzle-Solving.");
	printf("\n4.Car-Racing.");
	printf("\n--->");
	scanf("%d",&d);
}

{
	//<-----Question 5----->(Not adding bcz then there are 120 possible solutions!!!)
	/*printf("\nQ.5)?");
	printf("\n1..");
	printf("\n2..");
	printf("\n3..");
	printf("\n4..");
	printf("\n--->");
	scanf("%d",&e);*/
}
	system("cls");
{
	//<-----Result----->
	printf("%d,%d,%d,%d",a,b,c,d);
	if(a=1)
	{
	}
	else if(a=2)
	{
	}
	else if(a=3)
	{
	}
	else if(a=4)
	{
	}
	else
	printf("Invalid Answer!!!");
}
    getch();
    return 0;
}
