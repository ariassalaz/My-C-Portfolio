#include <stdio.h>
#include <string.h>

int main(){
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);
    
    getchar();
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';

    /*printf("%d\n", age);
    printf("%.1f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);*/

    printf("Hello, %s", name);
    printf(". Your age is %d", age);
    printf(". Your GPA is %.1f", gpa);
    printf(", and your grade is %c", grade);
}