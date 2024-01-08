// Salting
// Find the salted form of a password entered by user if the salt is "123" & added at the end.

#include <stdio.h>
#include<string.h>

void printString(char arr[]);
int countLength(char arr[]);
void Salting(char password[]);
int main()
{
    char password[100];
    scanf("%s", password);
    Salting(password);
}
void Salting(char password[])
{
    char salt[] = "123";
    char newPass[200];
    strcpy(newPass, password); // newPass ="test"
    strcat(newPass, salt);     // newPass ="test"+"123"
    puts(newPass);
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
