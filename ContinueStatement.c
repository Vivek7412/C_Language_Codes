// skip to next iteration
// Print all number from 1to 10 except for 6


#include<stdio.h>
int main(){
    for (int i = 1; i <= 10; i++)
    {
        if (i==6)  //skip
        {
            continue;
        } 
        printf("%d \n", i);
    }
    return 0;

}