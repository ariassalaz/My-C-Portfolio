#include <stdio.h>

/*typedef enum {
    SUNDAY = 1, MONDAY = 2, TUESDAY = 3, 
    WEDNESDAY = 4, THURSDAY = 5, FRIDAY = 6, SATURDAY = 7
}Day;*/

typedef enum {
    SUCCESS, FAILURE, PENDING
}Status;

void connectStatus(Status status);

int main(){
    /*Day today =  TUESDAY;

    if(today == SUNDAY || today == SATURDAY){
        printf("It's the weekend.");
    }else{
        printf("It's a weekday.");
    }*/

    Status status = SUCCESS;

    connectStatus(status);

}

void connectStatus(Status status){
    switch(status){
        case SUCCESS:
            printf("Connection was succesful\n");
            break;

        case FAILURE:
            printf("Could not connect\n");
            break;

        case PENDING:
            printf("Connecting...\n");
            break;
    }
}