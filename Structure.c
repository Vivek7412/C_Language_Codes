#include <stdio.h>
#include <string.h>
// user defind
struct student
{
    int roll;
    float cgpa;
    char name[100];
};
int main()
{
    struct student s1;
    s1.roll = 1001;
    s1.cgpa = 9.5;
    strcpy(s1.name, "Vivek Kumar");
    printf("student name:%s\n", s1.name);
    printf("student rool no:%d\n", s1.roll);
    printf("stdent cgpa:%f\n", s1.cgpa);
    return 0;
}
