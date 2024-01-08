#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if(year%4==0)
    {
     pritf("Leap year");
    }
    else
    {
     printf("Non leap year");
    }
    return 0;
}
