// Make a structure to store Bank Acount Information of a customer of ABC Bank Also, make an alias(typedef) for it.
#include <stdio.h>
#include <string.h>
typedef struct BankAccount
{
    int accountNo;
    char name[100];
} acc;
int main()
{
    acc acc1 = {12345671, "Vivek Kumar"};
    acc acc2 = {12345672, "Vikash Kumar"};
    acc acc3 = {12345673, "Vikky Kumar"};
    printf("Acc no = %d\n", acc1.accountNo);
    printf("Name = %s\n", acc1.name);
    printf("Acc no = %d\n", acc2.accountNo);
    printf("Name = %s\n", acc2.name);
    printf("Acc no = %d\n", acc3.accountNo);
    printf("Name = %s\n", acc3.name);
    return 0;
}
