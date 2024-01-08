// Write a program to check if a student passed or failed.


#include<stdio.h>
int main(){
    int marks;
    printf("Emter marks:");
    scanf("%d",&marks);

    if (marks>=0 && marks<=30)
    {
        printf("FAIL \n"); 
    }
    else if (marks>=30 && marks<=100)
    {
        printf("PASS \n");
    }
    else{
        printf("Wrong marks");
    }
    // TERNURY
// marks <=30 ? printf("FAIL \n"):printf("PASS \n");    
    


    return 0;
}