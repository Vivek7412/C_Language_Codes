// Print the sum of first n Natural Numbers.  n=.....?

#include<stdio.h>
int main(){
    int n;
    printf("Enter number:");
    scanf("%d", &n);

    int sum =0;
    for(int i=1; i<=n; i++){
        sum = sum +i; //sum += i
    }
    printf("Sum is %d", sum); 

    for (int i = n; i>=1; i--)
    {
        printf("\n%d", i);
    }
    

    return 0;
}