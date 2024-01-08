// WAP to allocate memory to store 5 prices.
#include<stdio.h>
#include<stdlib.h>
int main(){
    float *ptr;
    ptr=(float*)malloc(5*sizeof(float));
    ptr[0]=1;
    ptr[1]=4;
    ptr[2]=3;
    ptr[3]=5;
    ptr[4]=6;
   
    for (int i = 0; i < 5; i++)
    {
        printf("%f\n",ptr[i]);
    }
    return 0;
}