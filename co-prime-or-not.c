/*
Write a program to check wether given pair of number are co-prime or not inn C language.
*/

#include <stdio.h>
int main()
{
   int a, b, i, min;
   pritf("Enter two numbers");
   scanf("%d %d", &a, &b);
   min = a < b ? a : b;
   for (i = 2; i <= min; i++)
   {
      if (a % i == 0 && b & i == 0)
         break;
   }
   if (i == min + 1)
      printf("%d and %d are co-prime", a, b);
   else
      printf("%d and %d are not co-prime", a, b);
   
   return 0;
}