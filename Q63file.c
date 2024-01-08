// Write a program to write all odd nummber from 1 to n in a file.

#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("all odd no.txt", "w");
    int n;
    printf("I am vivek Enter n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            fprintf(fptr, "%d\n", i);
        }
    }
    fclose(fptr);
    return 0;
}