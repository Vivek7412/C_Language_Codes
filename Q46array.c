// Create a 2D array , storing the tables of 2 & 3.

#include <stdio.h>
void storeTable(int arr[][10], int n, int m, int number);
int main()
{
    int tables[2][10];
    storeTable(tables, 0, 10, 2);
    storeTable(tables, 1, 10, 3);
    // storeTable(tables, 2, 10, 4);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", tables[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", tables[1][i]);
    }
    // printf("\n");
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\t", tables[2][i]);
    // }
    printf("\n");
    return 0;
}
void storeTable(int arr[][10], int n, int m, int number)
{
    for (int i = 0; i < m; i++)
    {
        arr[n][i] = number * (i + 1);
    }
}
