#include <stdio.h>

int main(){
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%3d ", i * j);
        }
        printf("\n");        
    }
    

    int rows = 0;
    int columns = 0;
    char symbol = '\0';

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    printf("Enter a symbol: ");
    scanf(" %c", &symbol);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }
    
}