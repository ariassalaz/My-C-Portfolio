#include <stdio.h>
#include <string.h>

int main(){
    FILE *pFile = fopen("C:\\Users\\ricar\\OneDrive\\Escritorio\\input.txt", "r");
    char buffer[1024] = {0};
    
    while(fgets(buffer, sizeof(buffer), pFile) != NULL){
        printf("%s", buffer);
    }
    if(pFile == NULL){
        printf("Could not open file\n");
        return 1;
    }

    fclose(pFile);
}