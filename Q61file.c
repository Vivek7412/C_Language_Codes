// Make a program to reade 5 integers from a file.
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("hello.txt",  "r");
    int n;
    fscanf(fptr,"%d",&n);
    printf("number = %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("number = %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("number = %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("number = %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("number = %d\n",n);
    fclose(fptr);
    return 0;
}