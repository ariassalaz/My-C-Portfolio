#include <stdio.h>

int main(){
    int numbers[] = {10, 20, 30, 40, 50};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    numbers[0] = 100;
    numbers[1] = 200;
    numbers[2] = 300;
    numbers[3] = 400;
    numbers[4] = 500;

    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", numbers[i]);
    }
    
}