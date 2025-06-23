#include <stdio.h>

int main(){
    int cociente, number, remainder, option, i = 0;
    int convertedNumber [32];

    printf("Number Convertor Program\n");
    printf("1. Convert to binary\n");
    printf("2. Convert to octal\n");
    printf("3. Convert to hexadecimal\n");
    printf("Choose one option: "); 
    scanf("%d", &option);
    
    printf("Which number would you like to convert?: ");
    scanf("%d", &number);

    switch (option)
    {
    case 1:
        while(number > 0){
            remainder = number % 2;
            convertedNumber[i++] = remainder;
            number = number / 2;
        }
        
        int totalBits = i;
        int paddedBits = totalBits + (4 - totalBits % 4) % 4;

        for (int j = paddedBits - 1; j >= 0; j--) {
            if (j >= totalBits)
                printf("0"); 
            else
                printf("%d", convertedNumber[j]);

        if (j % 4 == 0 && j != 0)
            printf(" ");
}
        break;
    
    case 2:
        while(number > 0){
            remainder = number % 8;
            convertedNumber[i++] = remainder;
            number = number / 8;
        }
        
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", convertedNumber[j]);
        }
        break;
    
   case 3:
        while(number > 0){
            remainder = number % 16;
            convertedNumber[i++] = remainder;
            number = number / 16;
        }
        
        for (int j = i - 1; j >= 0; j--) {
            if (convertedNumber[j] < 10)
                printf("%d", convertedNumber[j]);
            else
                printf("%c", convertedNumber[j] - 10 + 'A');
        }
        break;
    default:
        printf("Invalid option. Choose an option from 1 to 3.");
        break;
    }
    
}