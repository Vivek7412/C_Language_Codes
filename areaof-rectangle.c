#include<stdio.h>
int main()
{
    int w, l;
    printf("Enter area of a rectangle:");
    scanf("%d%d", &w, &l);
    printf("%d*%d=%d\n", w, l, w * l);
    int a = w * l;
    printf("Area of%d", a);
    return 0;;
}
