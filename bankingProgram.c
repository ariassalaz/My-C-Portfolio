#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main(){
    int choice = 0;
        float balance = 0.0f;

        printf("*** WELCOME TO THE BANK ***");

        do{
            printf("\nSelect an option: \n");
            printf("1. Check Balance\n");
            printf("2. Make a deposit\n");
            printf("3. Withdraw Money\n");
            printf("4. Exit");
            printf("\nEnter your choice: ");
            scanf("%d", &choice);
        
        
            switch (choice)
            {
            case 1:
                checkBalance(balance);
                break;
            
            case 2:
                balance += deposit();
                break;

            case 3:
                balance = withdraw(balance);
                break;

            case 4:
                printf("\n ***Thank you for using the bank!\n");                
            
            default:
                printf("\nInvalid choice. Please select 1 - 4\n");
                break;
            }
        }while(choice !=4);

        
}


void checkBalance(float balance){
    printf("Your current balance is: $%.2f\n", balance);
}

float deposit(){
    float amount = 0.0f;
    printf("How much money would you like to deposit?: $");
    scanf("%f", &amount);

    if(amount < 0){
        printf("Invalid amount.\n");
        return 0.0f;
    }else{
        printf("\nYou have deposited %.2f", amount);
        return amount;
    }

    
}
float withdraw(float balance){
    float amount = 0.0f;
    printf("How much money would you like to withdraw?: $");
    scanf("%f", &amount);
    
    if(amount < 0){
        printf("Invalid amount.\n");
        return balance;
    }else if ((balance - amount ) < 0){
        printf("\nYou can't withdraw %.2f. You only have %.2f available.\n", amount, balance);
        return balance;
    }else{
        printf("\nYou have withdrawed %.2f", amount);
        balance -= amount;
        return balance;
    }

    
}