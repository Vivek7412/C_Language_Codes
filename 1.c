#include<stdio.h>
int main()
{
int a,b,sum;
printf("Enter two no:\n");
scanf("%d%d",&a,&b);
sum=a+b;
printf("Sum of:%d",sum);

{
    int c,d,sub;
    printf("\nEnter two no:\n");
    scanf("%d%d",&c,&d);
    sub=c-d;
    printf("Sub:%d",sub);
}
{
    int k,l,mul;
    printf("\nEnter two no:\n");
    scanf("%d%d",&k,&l);
    mul=k*l;
    printf("Mul:%d",mul);
}
{
    int n,m,c;
    printf("\nEnter two no:\n");
    scanf("%d%d",&n,&m);
    c=n/m;
    printf("Division:%d",c);
}
{
    int r;float a;
    printf("\nEnter radius of a circle:\n");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("Area is %f",a);
}
{
    int l,w,a;
    printf("\nEnter area of a rectangle:\n");
    scanf("%d",&l);
    scanf("%d",&w);
     a=l*w;
    printf("Area of rectangle is%d",a);
}
{
    int l,w,h,C;
    printf("\nEnter the volume of a cuboid:\n","l\n,w\n,h\n");
    scanf("%d%d%d",&l,&w,&h);
    C=l*w*h;
    printf("Volume is cuboid:%d",C);
}
return 0;
}