#include <stdio.h>

int main(){
    char fruits[][10] = {"Apple", "Orange", "Grape"};

    int size = sizeof(fruits) / sizeof(fruits[0]);

    fruits[0][0] = 'e';
    fruits[0][4] = 'A';

    fruits[1][0] = 'e';
    fruits[1][5] = 'O';

    fruits[2][0] = 'e';
    fruits[2][4] = 'G';
    for(int i = 0; i < size; i++){
        printf("%s\n", fruits[i]);
    }
}