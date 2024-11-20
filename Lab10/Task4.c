#include <stdio.h>
#include <ctype.h>

struct car {
    char make[10];
    char model[10];
    int year;
    int price;
    int mileage;
};


void enter_car_info(struct car car_arr[], int* index){
    printf("Index position is: %d", *index);
    printf("Enter car make: ");
    scanf(" %s", &car_arr[*index].make);
    printf("Enter car model: ");
    scanf(" %s", &car_arr[*index].model);
    printf("Enter car year: ");
    scanf("%d", &car_arr[*index].year);
     // flushes the standard input
    // (clears the input buffer)
    while ((getchar()) != '\n');
    printf("Enter car price: ");
    scanf("%d", &car_arr[*index].price);
     // flushes the standard input
    // (clears the input buffer)
    while ((getchar()) != '\n');
    printf("Enter car mileage: ");
    scanf("%d", &car_arr[*index].mileage);
    (*index)++;
}

void display_cars(struct car car_arr[], int size) {
    int i = 0;
    for(i=0;i<size;i++){
        printf("Car make: %s\n", car_arr[i].make);
        printf("Car model: %s\n", car_arr[i].model);
        printf("Car year: %d\n", car_arr[i].year);
        printf("Car price: %d\n", car_arr[i].price);
        printf("Car Mileage: %d\n", car_arr[i].mileage);
    }
}

void search_car(struct car car_arr[], int size, char search_make[], char search_model[]){
    int i = 0;
    int car_found = 0;
    for(;i < size; i++){
        if(search_make == car_arr[i].make){
            break;
            car_found = 1;
        }
        else if(search_model == car_arr[i].model){
            break;
            car_found = 1;
        }
    }
    if(car_found == 1){
        printf("Your car information\n");
        printf("Car make: %s\n", car_arr[i].make);
        printf("Car model: %s\n", car_arr[i].model);
        printf("Car year: %d\n", car_arr[i].year);
        printf("Car price: %d\n", car_arr[i].price);
        printf("Car Mileage: %d\n", car_arr[i].mileage);
    } else{
        printf("No car found\n");
    }
    
}

int main(){
    int index = 0;
    int size = 10;
    char user_make[10];
    char proceed;
    char user_model[10];
    char option;
    struct car car_arr[size];
    do{
        printf("d to display all cars listed\n");
        printf("a to enter a car information\n");
        printf("s to search for a car by its make or model\n");
        printf("Enter any one option: ");
        scanf("%c", &option);
        if(tolower(option) == 'd') display_cars(car_arr, size);
        else if(tolower(option) == 'a') enter_car_info(car_arr, &index);
        else if(tolower(option) == 's') {
            printf("Enter car make: ");
            scanf("%s", &user_make);
            printf("Enter car model: ");
            scanf("%s", &user_model);
            search_car(car_arr, size, user_make, user_model);
        }            
         // flushes the standard input
        // (clears the input buffer)
        while ((getchar()) != '\n');
        printf("Do you wish to proceed (y/n): ");
        scanf("%c", &proceed);
    }while(index <= 9 && tolower(proceed) == 'y');




    return 0;
}