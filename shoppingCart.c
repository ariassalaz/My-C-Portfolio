#include <stdio.h>
#include <string.h>

int main(){
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency ='$';
    float total = 0.0f;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item)-1]= '\0';

    printf("What is the price for each item?: ");
    scanf("%f", &price);
    printf("How many would you like?: ");
    scanf("%d", &quantity);
    
    total = price * quantity;

    printf("\nYou have bought %d %ss\n", quantity, item);
    printf("%c%.2f", currency, total);
}