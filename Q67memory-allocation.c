// WAP to allocate memory of size n, where n is entered by the user.
// In the above Q, free the memory allocation with calloc

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("Enter n :");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    free(ptr);
    ptr = (int *)calloc(2, sizeof(int));
    for (int i = 0; i < 2; i++)
    {
        printf("%d\n", ptr[i]);
    }
    return 0;
}