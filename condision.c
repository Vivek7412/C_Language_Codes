#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    a%5?printf("%d is not divisible by 5",a): printf("%d is divisible by 5",a);
    return 0;
}