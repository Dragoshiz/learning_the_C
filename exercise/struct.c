#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main(){

    struct Student student1;
    student1.age = 21;
    student1.gpa = 3.5;
    strcpy(student1.name, "Imbrea");
    strcpy(student1.major, "Sports" );

    printf("%s", student1.name);
}
