#include <stdio.h>

void birthday(int* age);

int main(){
    int age = 20;
    int *pAge = &age;
    
    /*printf("%p\n", &age);
    printf("%p", pAge);*/

    birthday(pAge);

    printf("You are %d years old", age);
}

void birthday(int* age){
    (*age)++;
}