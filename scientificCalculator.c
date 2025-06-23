#include <stdio.h>
#include <math.h>
#include <windows.h>

int factorial (int num);
void addition();
void subtraction();
void multiplication();
void division();

int main(){
    int option = 0;
    int totalNumbers = 0;
    float num = 0.0f;
    float result = 0.0f;
    float power = 0.0f;
    
    do{
        printf("****SCIENTIFIC CALCULATOR PROGRAM****\n");
        printf("1. Addition\n");
        printf("2. Substraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Square root\n");
        printf("7. Logarithm (ln)\n");
        printf("8. Sine\n");
        printf("9. Cosine\n");
        printf("10. Tangent\n");
        printf("11. Factorial\n");
        printf("12. Exit\n");

        printf("Choose an option: ");
        scanf("%d", &option);

        if(option > 12 || option < 1){
                printf("Please enter a valid option (1-12)\n");
                Sleep(3000);
                system("cls");
        }else{
            switch (option)
        {
        case 1:
            addition();
            break;
        
        case 2:
            subtraction();
            break;
            
        case 3:
            multiplication();
            break;    
        
        case 4:
            division();
            break;
        
        case 5:
            printf("Enter a number: ");
            scanf("%f", &num);

            printf("To which power would you like to raise it?: ");
            scanf("%f", &power); 

            result = pow(num, power);

            printf("Result: %.2f\n", result);
            Sleep(3000);
            system("cls");
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%f", &num);

            result = sqrt(num);

            printf("Result: %.2f\n", result);
            Sleep(3000);
            system("cls");
            break;

        case 7:
            printf("Enter a number: ");
            scanf("%f", &num);

            result = log(num);

            printf("Result: %.2f\n", result);
            Sleep(3000);
            system("cls");
            break;

        case 8:
            printf("Enter a number: ");
            scanf("%f", &num);

            result = sin(num);

            printf("Result: %.2f\n", result);
            Sleep(3000);
            system("cls");
            break;

        case 9:
            printf("Enter a number: ");
            scanf("%f", &num);

            result = cos(num);

            printf("Result: %.2f\n", result);
            Sleep(3000);
            system("cls");
            break;

        case 10:
            printf("Enter a number: ");
            scanf("%f", &num);

            result = tan(num);

            printf("Result: %.2f\n", result);
            Sleep(3000);
            system("cls");
            break;

        case 11:
            printf("Enter a number: ");
            scanf("%f", &num);

            if(num != (int)num || num < 0){
                printf("ERROR. FACTORIAL ONLY WORKS FOR WHOLE POSITIVE NUMBERS!\n");
                Sleep(3000);
                system("cls");
            }else{
                result = factorial((int)num);
                printf("Result: %.2f\n", result);
                Sleep(3000);
                system("cls");
            }
            break;

        default:
           break;
         }
    }
        
    }while (option != 12);
    printf("**** PROGRAM FINISHED :)****");
}

int factorial (int num){
    int factorial = 1;
    if(num == 0){
        return 1;
    }else{
        for (int i = 1; i <= num; i++)
        {
            factorial = factorial * i;
        }
        return factorial;
    }
}

void addition(){
    int totalNumbers = 0;
    float sum = 0.0f;
    float number = 0.0f;
    printf("How many numbers would you like to add?: ");
    scanf("%d", &totalNumbers);
        for(int i = 0; i < totalNumbers; i++){
            printf("Number %d: ", i+1);
            scanf("%f", &number);
            sum += number;
        }
    printf("Result: %.2f\n", sum);
    Sleep(3000);
    system("cls");
}

void subtraction(){
    int totalNumbers = 0;
    float sub = 0.0f;
    float number = 0.0f;
    printf("How many numbers would you like to substract?: ");
    scanf("%d", &totalNumbers);

    printf("Number 1: ");
    scanf("%f", &sub);

        for(int i = 1; i < totalNumbers; i++){
            printf("Number %d: ", i + 1);
            scanf("%f", &number);
            sub -= number;
        }
    printf("Result: %.2f\n", sub);
    Sleep(3000);
    system("cls");
}

void multiplication(){
    int totalNumbers = 0;
    float mul = 1.0f;
    float number = 0.0f;
    printf("How many numbers would you like to multiply?: ");
    scanf("%d", &totalNumbers);
        for(int i = 0; i < totalNumbers; i++){
            printf("Number %d: ", i + 1);
            scanf("%f", &number);
            mul *=  number;
        }
        printf("Result: %.2f\n", mul);
        Sleep(3000);
        system("cls");
    
}

void division(){
    int totalNumbers = 0;
    float div = 0.0f;
    float number = 0.0f;
    printf("How many numbers would you like to divide?: ");
    scanf("%d", &totalNumbers);

    printf("Number 1: ");
    scanf("%f", &div);

        for(int i = 1; i < totalNumbers; i++){
            printf("Number %d: ", i + 1);
            scanf("%f", &number);
            if(number == 0){
                printf("ERROR. Can't divide by 0.\n");
                div = 0;
            }else{
                div /= number;
            }
        }
        if(div !=0){
            printf("Result: %.2f\n", div);
        }
        Sleep(3000);
        system("cls");
}


