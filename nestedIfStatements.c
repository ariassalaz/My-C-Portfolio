#include <stdio.h>
#include <stdbool.h>

int main(){
    float price = 10.0;
    bool isStudent = true; // 10% discount
    bool isSenior = false; // 20% discount
    
    if(isStudent){
        if(isSenior){
            printf("You get a discount of 30%\n");
            price *= 0.7;
        }else{
            printf("You get a student discount of 10%\n");
        price *= 0.9;
        }
        
    }else{
        if(isSenior){
            printf("You get a discount of 20%\n");
            price *= 0.8;
        }
    }
    

    printf("The price of a ticket is: $%.2f\n", price);
}