#include <stdio.h>
int main()
{
    int aadhar[5];
    // input
    int *ptr = &aadhar[0];
    for (int i = 0; i < 10; i++)
    {
        printf("%d index:", i);
        scanf("%d", &aadhar[i]);
    }
    // output
    for (int i = 0; i < 5; i++)
    {
        printf("%d index=%d", i, aadhar[i]);
    }

    return 0;
}