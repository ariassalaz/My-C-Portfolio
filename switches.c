#include <stdio.h>

int main(){

    for (int i = 1; i <= 7; i++)
    {
    switch (i)
        {
        case 1:
            printf("Today is Monday\n");
        break;
    
        case 2:
            printf("Today is Tuesday\n");
        break;
        
        case 3:
            printf("Today is Wednesday\n");
        break;

        case 4:
            printf("Today is Thursday\n");
        break;

        case 5:
            printf("Today is Friday\n");
        break;

        case 6:
            printf("Today is Saturday\n");
        break;

        case 7:
            printf("Today is Sunday\n");
        break;
    default:
        break;
    }
    }
    
    
}