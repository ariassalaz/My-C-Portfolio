//This is my capstone project on C, which will be a student management system
//Register, Consult, Modify and Delete a Student using files.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>

typedef struct{
    int id;
    char name[70];
    int age;
    char career[70];
    int grades[6];
    float average;
}Student;

int loadFromFile(Student **students, const char *filename);
void saveToFile(Student *students, int count, const char *filename);
void registerStudents(int count);
void listStudents();
void modifyStudent();
void deleteStudent();

int main(){
    int option = 0;
    int studentCount = 0;
    Student * students = NULL;

    do{
        printf("\n****STUDENT MANAGEMENT SYSTEM****\n");
        printf("1. Register Students\n");
        printf("2. List All Students\n");
        printf("3. Modify Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        
        
        do{
            printf("Choose an option: ");
            scanf("%d", &option);
            getchar();
            if (option < 1 || option > 5) {
                printf("Invalid option. Please enter a number between 1 and 5.\n");
            }
        }while (option < 1 || option > 5);
        
        switch (option)
        {
        case 1:
            printf("Enter the number of students to register: ");
            scanf("%d", &studentCount);

            registerStudents(studentCount);
            break;
        
        case 2:
            listStudents();
            break;
        
        case 3:
            modifyStudent();
            break;

        case 4:
            deleteStudent();

        default:
            break;
        }    
    }while(option != 5);

    printf("****PROGRAM FINISHED****");
    free(students);
}


int loadFromFile(Student **students, const char *filename){
    FILE *pFile = fopen(filename, "r");
    
    if(pFile == NULL){
        return 0;
    }

    int count = 0;
    Student temp;
    Student *list = calloc(100, sizeof(Student));
    
    while (fscanf(pFile, "ID: %d\n", &temp.id) == 1) {
        char buffer[128];

        fgets(buffer, sizeof(buffer), pFile);
        sscanf(buffer, "Name: %[^\n]", temp.name);

        fgets(buffer, sizeof(buffer), pFile);
        sscanf(buffer, "Age: %d", &temp.age);

        fgets(buffer, sizeof(buffer), pFile);
        sscanf(buffer, "Career: %[^\n]", temp.career);

        fgets(buffer, sizeof(buffer), pFile); 
        sscanf(buffer, "Grades: %d %d %d %d %d %d",
               &temp.grades[0], &temp.grades[1], &temp.grades[2],
               &temp.grades[3], &temp.grades[4], &temp.grades[5]);

        fgets(buffer, sizeof(buffer), pFile);
        sscanf(buffer, "Average: %f", &temp.average);

        fgets(buffer, sizeof(buffer), pFile);

        list[count++] = temp;
    }

    fclose(pFile);
    *students = list;
    return count;
}

void saveToFile(Student *students, int count, const char *filename){
    FILE *pFile = fopen(filename, "w");
    
    if(pFile == NULL){
        printf("Error opening file\n");
    }

    for (int i = 0; i < count; i++)
    {
        fprintf(pFile, "ID: %d\n", students[i].id);
        fprintf(pFile, "Name: %s\n", students[i].name);
        fprintf(pFile, "Age: %d\n", students[i].age);
        fprintf(pFile, "Career: %s\n", students[i].career);
        fprintf(pFile, "Grades: ");

        for (int  j = 0; j < 6; j++)
        {
            fprintf(pFile, "%d ", students[i].grades[j]);
        }
        fprintf(pFile, "\nAverage: %.2f\n", students[i].average);
        fprintf(pFile, "--------------------------\n");
    }
    fclose(pFile);
}

void registerStudents(int count){
    Student * students = calloc(count, sizeof(Student));

    if (students == NULL) {  
        printf("Memory allocation failed.\n");
        return;
    }

    FILE *pFile = fopen("C:\\Users\\ricar\\OneDrive\\Documentos\\Students.txt", "a");
           
    if (pFile == NULL) {
        printf("Error opening file\n");
        return;
    }

    int size = sizeof(students->grades) / sizeof(students->grades[0]); 
            
    for (int i = 0; i < count; i++)
    {
        do{
            printf("Enter Student ID: ");
            scanf("%d", &students[i].id);
                    
            if(students[i].id < 0){
                printf("Invalid ID.");
            }
            getchar();
        }while(students[i].id < 0); // Validate no negative ID's
                

        printf("Enter Student Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strlen(students[i].name)-1] = '\0';

        printf("Enter Student Age: ");
        scanf("%d", &students[i].age);
        getchar();

        printf("Enter Student Career: ");
        fgets(students[i].career, sizeof(students[i].career), stdin);
        students[i].career[strlen(students[i].career)-1] = '\0';

        int sum = 0;      

        for (int j = 0; j < size; j++)
        {
            printf("Enter Grade %d: ", j + 1);
            scanf("%d", &students[i].grades[j]);
            sum += students[i].grades[j];                
        }
                
        float average = students[i].average = (float)sum / size;

        //Write student information on our file
        fprintf(pFile, "ID: %d\n", students[i].id);
        fprintf(pFile, "Name: %s\n", students[i].name);
        fprintf(pFile, "Age: %d\n", students[i].age);
        fprintf(pFile, "Career: %s\n", students[i].career);
        fprintf(pFile, "Grades: ");
                
        for (int j = 0; j < size; j++) {
            fprintf(pFile, "%d ", students[i].grades[j]);
        }
                
        fprintf(pFile, "\nAverage: %.2f\n", students[i].average);
        fprintf(pFile, "--------------------------\n");

        printf("Student Average: %.2f\n", average);
        printf("STUDENT REGISTERED SUCCESSFULLY.\n");
        printf("\n");

        //Show the output for 3 seconds and clean the terminal
        Sleep(3000);
        system("cls");
        }
        
        fclose(pFile);
}

void listStudents(){
    FILE *pFile = fopen("C:\\Users\\ricar\\OneDrive\\Documentos\\Students.txt", "r");
    char buffer[1024]={0};

                
    if(pFile == NULL){
        printf("Error opening file\n");
    }

    printf("\n***** STUDENT LIST *****\n\n");

    //Get student information from the file
    while (fgets(buffer, sizeof(buffer), pFile)) {
        printf("%s", buffer);
    }
                
    //Show output for 5 seconds then show the menu again
    Sleep(5000);
    fclose(pFile);
}

void modifyStudent(){
    Student * students = NULL;
    
    if(students != NULL) {
        free(students);
        students = NULL;
    }
            
    int count = loadFromFile(&students, "C:\\Users\\ricar\\OneDrive\\Documentos\\Students.txt");
            
    //No students on the list
    if (count == 0) {
        printf("No data found.\n");
    }

    int id = 0;
    int newOption = 0;

    printf("Enter the ID of the student to modify: ");
    scanf("%d", &id);

    bool found = false;

    for (int i = 0; i < count; i++)
    {
        if (students[i].id == id)
        {
            found = true;

            printf("Select an option to modify\n");
            printf("1. ID\n");
            printf("2. Name\n");
            printf("3. Age\n");
            printf("4. Career\n");
            printf("5. Grades:\n");
            

            do{
                printf("OPTION: ");
                scanf("%d", &newOption);
                getchar();
                if (newOption < 1 || newOption > 5) {
                    printf("Invalid option. Please enter a number between 1 and 5.\n");
                }
            }while (newOption < 1 || newOption > 5);

            switch (newOption)
            {
                case 1:
                    do{
                        printf("Enter new ID: ");
                        scanf("%d", &students[i].id);
                        getchar();
                        if(students[i].id < 0){
                            printf("Invalid ID.");
                        }
                    }while(students[i].id < 0);// No negative ID's
                break;
                
                case 2:
                    printf("Enter new name: ");
                    fgets(students[i].name, sizeof(students[i].name), stdin);
                    students[i].name[strcspn(students[i].name, "\n")] = '\0';
                    break;

                case 3:
                    printf("Enter new age: ");
                    scanf("%d", &students[i].age);
                    break;

                case 4:
                    printf("Enter new career: ");
                    fgets(students[i].career, sizeof(students[i].career), stdin);
                    students[i].career[strcspn(students[i].career, "\n")] = '\0';
                    break;

                case 5:
                    int sum = 0;
                            
                    for (int j = 0; j < 6; j++)
                    {
                        printf("Enter grade %d: ", j + 1);
                        scanf("%d", &students[i].grades[j]);
                        sum += students[i].grades[j];
                    }
                    
                    students[i].average = (float) sum / 6;
                break;
                
                default:
                    break;
        
                }
            }
        }
        if(!found){
            printf("Student with ID %d not found.\n", id);
        }else{
            saveToFile(students, count, "C:\\Users\\ricar\\OneDrive\\Documentos\\Students.txt");
            printf("Student information updated successfully.\n\n");
        }
}

void deleteStudent(){
    Student * students = NULL;
    if(students != NULL) {
            free(students);
            students = NULL;
    }
            
    int count = loadFromFile(&students, "C:\\Users\\ricar\\OneDrive\\Documentos\\Students.txt");
            
    if (count == 0) {
        printf("No data found.\n");
    }

    int id = 0;
    printf("Enter the ID of the student to delete: ");
    scanf("%d", &id);

    bool found = false;

    for (int i = 0; i < count; i++)
    {
        if (students[i].id == id)
        {
            found = true;
                    
            for (int j = i; j < count - 1; j++)
            {
                students[j] = students[j + 1];
            }
            count--;
            break;
        }
    }
            
    if(!found){
        printf("Student with ID %d not found.\n", id);
    }else{
        saveToFile(students, count, "C:\\Users\\ricar\\OneDrive\\Documentos\\Students.txt");
        printf("Student deleted successfully.\n\n");
    }
}