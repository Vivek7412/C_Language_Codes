#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    float cgpa;
    char name[100];
};
int main()
{
    struct student it[100];
    it[0].roll = 1;
    it[0].cgpa = 9.8;
    strcpy(it[0].name, "vivek");
    printf("roll=%d\n", it[0].roll);
    printf("cgpa=%f\n", it[0].cgpa);
    printf("name=%s\n", it[0].name);
    return 0;
}
