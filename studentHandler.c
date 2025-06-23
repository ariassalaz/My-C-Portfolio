#include <stdio.h>
#include <string.h>

void bubbleSort(float avg [] , int length);

int main(){
    char name[50] = "";
    int age = 0;
    float average = 0.0f;

    for (int i = 1; i <= 3; i++)
    {
        printf("Student %d  name: ", i);
        fgets(name, sizeof(name),stdin);
        name[strlen(name)-1] = '\0';

        printf("Student %d  age: ", i);
        scanf("%d" , &age);
        getchar();
        printf("Student %d  average grade: ", i);
        scanf("%f" , &average);
        getchar();
        
        printf("    NAME  AGE AVERAGE\n");
        printf("%d: %s %d %.2f\n" , i, name, age, average);
    }


}

void bubbleSort(float avg [] , int length){
    float temp;
    for(int i=1; i < length; i++){
        for (int j= 0;  j< length - 1; j++)
        {
            if(avg[j] > avg [j+1]){
                temp = avg[j];
                avg[j] = avg[j+1];
                avg[j+1] = temp;
            }    
        }
    }
}