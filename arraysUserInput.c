#include <stdio.h>

int main(){
    int scores[5];

    int size = sizeof(scores) / sizeof(scores[0]);

    for (int i = 0; i < size; i++)
    {
        printf("Score %d: ", i+1);
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", scores[i]);
    }
}