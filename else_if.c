#include<stdio.h>
int main(){
    int age;
    printf("Enter Age:");
    scanf("%d", &age);

if (/* condition */age>=18 )
{
  printf("Adult \n") ; /* code */
}
else if (age > 13 && age<=18)
{
  /* code */
  printf("tenage \n");
}

else{
  printf("Chlidren \n");
}
return 0;
}

