//Write a program to find if a charecter entered by user is upper case or not. 
#include<stdio.h>
int main(){
   char ch;
   printf("Enter Character :\n");
   scanf("%c", &ch);

   if (ch>='A' && ch<='Z')
   {
    printf("Upper case \n");
   }
   else if(ch>='a' && ch<='z'){
    printf("Lower case \n");
   }
   else{
    printf("Not english letter \n ");
   }
   return 0;
}