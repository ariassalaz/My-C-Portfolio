#include <stdio.h>
#include <ctype.h>

int main(){
    char questions[][100] = {"What is the largest planet in the solar system?",
                             "What is the hottest planet?",
                             "What planet has the most moons?",
                             "Is the Earth flat?"};
    char options [][100] = { "A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune\n",
                             "A. Mercury\nB. Venus\nC. Earth\nD. Mars\n",
                             "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn\n",
                             "A. Yes\nB. No\n"};

    char answerKey[] = {'A', 'B', 'C', 'B'};

    printf("****QUIZ GAME****\n");

    char guess = '\0';
    int score = 0;
    int size = sizeof(questions) / sizeof(questions[0]);
    for (int i = 0; i < size; i++)
    {
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);
        printf("\nEnter your choice: ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if( guess = answerKey[i]){
            printf("CORRECT!\n");
            score++;
        }else{
            printf("WRONG!\n");
        }
    }
    
    printf("Your score is %d/4.", score);
    
}