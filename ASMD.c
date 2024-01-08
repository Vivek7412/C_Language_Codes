#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter a:",a);
  scanf("%d",&a);
  printf("Enter b:",b);
  scanf("%d",&b);
    c=a+b;
    printf("Add:%d",c);
    {
         int a,b,c;
        printf("\nEnter a:",a);
        scanf("%d",&a);
        printf("Enter b:",b);
        scanf("%d",&b);
        c=a-b;
        printf("Sub%d",c);
    }
    {
       int a,b,c;
       printf("\nEnter two number",a,b);
       scanf("%d%d",&a,&b);
       c=a*b;
       printf("mul%d",c);
    }
    {
      int a,b,c;
      printf("\nEnter two number",a,b);
      scanf("%d%d",&a,&b);
 s     c=a/b;
      printf("divi%d",c);
    }
    return 0;
}
