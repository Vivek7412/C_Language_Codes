// Check if a given charecture is present in a string or not.

#include <stdio.h>
#include <string.h>
void checkChar(char str[], char ch);
int main()
{
    char str[] = "Vivek kumar";
    char ch = 'i';
    checkChar(str, ch);
}
void checkChar(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("Charecture is present!");
            return;
        }
    }
    printf("Character is not present!");
}