// Write a function named slice, which takes a string & returns a slice string from index n to m.

#include <stdio.h>
#include <string.h>
int countLength(char arr[]);
void slice(char str[], int n, int m);
int main()

{
    char str[] = "HelloWorld";
    slice(str, 3, 7);
}
void slice(char str[], int n, int m)
{
    // n & m are valid value
    char newStr[100];
    int j = 0;
    for (int i = n; i <= m; i++, j++)
    {
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}
int countLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i != '\0']; i++)
    {
        count++;
    }
    return count - 1;
}
