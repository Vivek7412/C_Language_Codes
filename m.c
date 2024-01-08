#include<conio.h>
int main()
{
    int iLoop;
    clrscr();
    for(iLoop=0;iLoop<=15;iLoop++)
    {
       textcolor(iLoop);
       textbackground(15-iLoop);
       _cprintf("www.includehelp.com");
       _cprintf("\r\n"); /* code */
    }
    getch();
    return 0;
    
}