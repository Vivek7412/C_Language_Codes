/*
Write a function to print n terms of the fibonacci sequence.
0,1,1,2,3,5,8,13,21,34,55,89,144,............
*/
 #include<stdio.h>
 int fib(int n);
 int main()
{
    int n;
 printf("Enter the number:");
 scanf("%d",&n);
 printf("%d", fib(n));
 return 0;
}
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibNm1= fib(n-1);
    int fibNm2= fib(n-2);
    int fibN= fibNm1 +fibNm2;
    return fibN;
}
