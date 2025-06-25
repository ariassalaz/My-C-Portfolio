#include <stdio.h>

typedef struct {
    char model[25];
    int year;
    int price;
}Car;

int main(){
    Car cars[] = {{"Kia K3", 2025, 490000},
                 {"Corvette", 2024, 760000},
                 {"Mustang", 2024, 580000}};
  
    int size = sizeof(cars) / sizeof(cars[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);
    }
    }
    
   