// Write a program to store the data of 3 student.

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
    struct student s1;
    s1.roll = 1001;
    s1.cgpa = 9.5;
    strcpy(s1.name, "Vivek Kumar");
    printf("student name:%s\n", s1.name);
    printf("student rool no:%d\n", s1.roll);
    printf("stdent cgpa:%f\n", s1.cgpa);
    
    struct student s2;
    s2.roll = 1002;
    s2.cgpa = 9.0;
    strcpy(s2.name, "Vikash");
    printf("student name:%s\n", s2.name);
    printf("student rool no:%d\n", s2.roll);
    printf("stdent cgpa:%f\n", s2.cgpa);

    struct student s3;
    s3.roll = 1003;
    s3.cgpa = 8.9;
    strcpy(s3.name, "Vinita");
    printf("student name:%s\n", s3.name);
    printf("student rool no:%d\n", s3.roll);
    printf("stdent cgpa:%f\n", s3.cgpa);
    return 0;
}