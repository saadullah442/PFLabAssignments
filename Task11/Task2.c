#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct salary {
    char name[10];
    int id;
    int amaount;
};


int main(){
    struct salary buffer;

    struct salary emp_salary;
    FILE *file = fopen("Salary_record.bin", "wb");
    if (file == NULL){
        printf("File could not be opened\n");
        exit(1);
    }

    // Taking input from user
    printf("Enter employee name: ");
    scanf("%s", &emp_salary.name);
    printf("Enter employee id: ");
    scanf("%d", &emp_salary.id);
    printf("Enter employee salary: ");
    scanf("%d", &emp_salary.amaount);
    // fprintf(file, "%s\n%d\n%d", emp_salary.name, emp_salary.id, emp_salary.amaount);

    int written = fwrite(&emp_salary, sizeof(struct salary) , 1, file);
    fclose(file);

    file = fopen("Salary_record.bin" ,"rb");
    if (file == NULL){
        printf("File could not be opened\n");
        exit(1);
    }
    int read_amt = fread(&buffer, sizeof(struct salary), 1, file);
    printf("Number of elements read: %d\n", read_amt);
    printf("buffer.name: %s\n", buffer.name);
    printf("buffer.amaount: %d\n", buffer.amaount);
    printf("buffer.id: %d\n", buffer.id);   
    file = file + 1;    
    printf("enf of file: %d", feof(file));
    fclose(file);
    // int sum = 0;
    // while(feof(file) == 0){
    //     fread(&buffer, sizeof(struct salary), 1, file);
    //     printf("buffer.amaount: %d\n", buffer.amaount);
    //     sum += buffer.amaount;
    // }
    // printf("Total Salary of all employees is: %d", sum);
    fclose(file);



    return 0;
}