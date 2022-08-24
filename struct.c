#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int age;
    double gpa;
    char major[50];
    char name[50];
};


int main() {

    struct Student sevban;

    sevban.age=20;
    sevban.gpa= 3.89;
    strcpy(sevban.major, "Management Information Systems");
    strcpy(sevban.name, " Sevban ");

    printf("%f", sevban.gpa);
    printf("%s", sevban.major);

    return 0;


}