/*
WRITE A PROGRAM TO GIVE GRADE TO A STUDENT
    marks<30 is Fail
    30<=marks<50 is B
    50<=marks<70 is B+
    70<=marks<=90 is A
    90<=marks<=100 is A+

*/ 
#include<stdio.h>
int main(){
    int marks ;
    printf("Enter marks:");
    scanf("%d", &marks);

    if(marks<30){
        printf("Fail");
    }
     else if(30<=marks && marks<50){
            printf("B");
        }
    else if (50<=marks && marks<70)
    {
       printf("B+");
    }
    else if (70<=marks && marks<=90)
    {
        printf("A");
    }
    else if (90<=marks && marks<=100)
    {
        printf("A+");
    }
    else{
        printf("marks not valid!");
    }
    return 0;
}
