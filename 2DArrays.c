#include <stdio.h>

int main(){
    int numbers[][3]= {{1,2,3}, 
                      {4,5,6}, 
                      {7,8,9}};

                    
    int rows = sizeof(numbers) / sizeof(numbers[0]);
    int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < columns; c++)
        {
                printf("%d ", numbers[r][c]);
        }
        printf("\n");
    }
    
}