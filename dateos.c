#include<stdio.h>
#include<unistd.h>
main()
{
    printf("\n execsystem call");
    printf("displaying the date");
    execIp("/bin/date","date",0);
}
