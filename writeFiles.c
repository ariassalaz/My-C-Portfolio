#include <stdio.h>

int main(){
FILE *pFile = fopen("C:\\Users\\ricar\\OneDrive\\Documentos\\output.txt",  "w");

    char text[] = "This a test to create a new file.";
    
    if(pFile == NULL){
        printf("Error opening file\n");
        return 1;
    }

    fprintf(pFile, "%s", text);

    printf("File was written successfully\n");

    fclose(pFile);
}