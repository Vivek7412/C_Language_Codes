// Enter address(house no, block, city, state) of 5 people.
#include<stdio.h>
#include<string.h>
struct address
{
    int houseNo;
    int blok;
    char city[100];
    char state[100];
}; 
void printAdd(struct address add);
int main()
{
    struct address adds[5];
    // input
    printf("Enter info for persion 1 :");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].blok);
    scanf("%s", &adds[0].city);
    scanf("%s", &adds[0].state);
    printf("Enter info for persion 2 :");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].blok);
    scanf("%s", &adds[1].city);
    scanf("%s", &adds[1].state);
    printf("Enter info for persion 3 :");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].blok);
    scanf("%s", &adds[2].city);
    scanf("%s", &adds[2].state);
    printf("Enter info for persion 4 :");
    scanf("%d", &adds[3].houseNo);
    scanf("%d", &adds[3].blok);
    scanf("%s", &adds[3].city);
    scanf("%s", &adds[3].state);
     
    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);
    return 0;
}
void printAdd(struct address add)
{
    printf("Address is :%d,%d,%s,%s\n", add.houseNo, add.blok, add.city, add.state);
}
