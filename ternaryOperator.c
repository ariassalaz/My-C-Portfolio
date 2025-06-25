#include <stdio.h>
#include <stdbool.h>

int main(){
    /*int x = 5;
    int y = 6;
    int max = (x > y) ? x : y;
    
    printf("%d", max);

    bool isOnline = true;

    printf("%s", (isOnline) ? "online" : "offline");*/

    int number = 8;

    printf("%d is %s", number, (number % 2 == 0) ? "even" :  "odd");

    int age = 20;

    printf("%s", (age > 18) ? "adult" : "child");

}