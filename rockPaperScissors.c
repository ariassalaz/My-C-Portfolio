#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    srand(time(NULL));
    int guess = 0;
    int min = 1;
    int max = 3;
    int answer = (rand() % (max - min + 1)) + 1;
    char name[10] = "";
    char cpuName[10] = "";

    printf("1. ROCK,\n");
    printf("2. PAPER,\n");
    printf("3. SCISSORS,\n");

    printf("Choose an option: ");
    scanf("%d", &guess);

    if(guess < 1 || guess > 3){
        printf("Please choose a number between 1-3\n");
    }

    switch (guess)
    {
    case 1:
        strcpy(name, "Rock");
        break;
    
    case 2:
        strcpy(name, "Paper");
        break;
    
    case 3:
        strcpy(name, "Scissors");
        break;
    default:
        break;
    }

    switch (answer)
    {
    case 1:
        strcpy(cpuName, "Rock");
        break;
    
    case 2:
        strcpy(cpuName, "Paper");
        break;
    
    case 3:
        strcpy(cpuName, "Scissors");
        break;
    default:
        break;
    }

    if(guess == answer){
        printf("Both chose %s. It's a tie.\n", name);
    }

    if(guess != answer){
        if(guess == 1 && answer == 2){
            printf("CPU chose %s and you chose %s. You lose.\n", cpuName, name);
        }else if(guess == 1 && answer == 3){
            printf("CPU chose %s and you chose %s. You win.\n", cpuName, name);
        }

        if(guess == 2 && answer == 1){
            printf("CPU chose %s and you chose %s. You win.\n", cpuName, name);
        }else if(guess == 2 && answer == 3){
            printf("CPU chose %s and you chose %s. You lose.\n", cpuName, name);
        }

        if(guess == 3 && answer == 1){
            printf("CPU chose %s and you chose %s. You lose.\n", cpuName, name);
        }else if(guess == 3 && answer == 2){
            printf("CPU chose %s and you chose %s. You win.\n", cpuName, name);
        }

        printf("\n");
    }
}