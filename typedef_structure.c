#include<stdio.h>
#include<string.h>
// user defind
typedef struct student
{
    int roll;
    float cgpa;
    char name[100];
}stu;
typedef struct computerengineeringstudent{
    int roll;
    float cgpa;
    char name[100];
}coe;
int main(){
    coe s1;
    s1.roll=111;
    s1.cgpa=9.45;
    strcpy(s1.name,"Vivek");
    printf("Student name is %s\n",s1.name);
    return 0;
}
