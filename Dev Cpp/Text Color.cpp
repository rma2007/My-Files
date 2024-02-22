#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    for (i = 1; i <= 10; i++) {
        textcolor(i);
        cprintf("studytonight");
        cprintf("\n\r");
    }
    textcolor(RED);
    cprintf("Bye");
    return 0;
}
