#include <stdio.h>
#include <string.h>

void happyBirthday(int times, char name [], int age){
    for (int i = 1; i <= times; i++){
        printf("\nHappy birthday to you!");
        printf("\nHappy birthday to you!");
        printf("\nHappy birthday dear %s!", name);
        printf("\nHappy birthday to you!");
        printf("\nYou are %d years old!\n", age);
    }
    

}
int main(){
    char name [50] = "Ricardo";
    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name),stdin);
    name[strlen(name) - 1] = '\0';
    
    printf("Enter your age: ");
    scanf("%d", &age);

    happyBirthday(3, name, age);
}