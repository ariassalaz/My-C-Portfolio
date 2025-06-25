#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct{
    char name[70];
    int age;
    float gpa;
    bool isFullTime;
}Student;

void printStudent(Student student);

int main(){
    Student student1 = {"Ricardo", 21, 3.3, true};
    Student student2 = {"Luis", 20, 3.8, false};
    Student student3 = {0};

    strcpy(student3.name, "Sergio");
    student3.age = 20;
    student3.gpa = 3.3; 
    student3.isFullTime = true;

    printStudent(student1);
    printStudent(student2);
    printStudent(student3);

}

void printStudent(Student student){
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.1f\n", student.gpa);
    printf("Full-time: %s\n", (student.isFullTime) ? "Yes" : "No");
    printf("\n");
}