// Sum of first n natural numbers.
// n --->  1+2+3+4....n-1+n
// n=5 -> 1+2+3+4+5 = sum(4)+5
// n=4 --> 1+2+3+4 = sum(3)+4

#include <stdio.h>
int sum(int n);
int main()
{

    printf("Sum is:%d", sum(10));

    return 0;
}

// Recursive function
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sumNm1 = sum(n - 1); // sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN;
}