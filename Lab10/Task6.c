#include <stdio.h>
#include <string.h>
struct package{
    char name[10];
    char dest[10];
    int cost;
    int num_of_seats;
};

void display_packages(struct package package_arr[], int size){
    int i = 0;
    printf("Package details\n");
    for(;i < size; i++){
        printf("Name: %s\n", package_arr[i].name);
        printf("Destination: %s\n", package_arr[i].dest);
        printf("Cost: %d\n", package_arr[i].cost);
        printf("Available seats: %d\n", package_arr[i].num_of_seats);
        printf("\n");
    }
}

int main(){
    int i;
    int size = 5;
    char package_name[10];
    // Entering package data
    struct package packages[] = {
        {"TourA", "Paris", 1200, 20},
        {"TourB", "London", 1500, 15},
        {"TourC", "Dubai", 1000, 25},
        {"TourD", "Rome", 1300, 30},
        {"TourE", "Tokyo", 2000, 10}
    };
    display_packages(packages, size);
    printf("Enter the name of package you want to book: ");
    scanf("%s", &package_name);

    // Checking if package exists
    for(i=0;i,size;i++){
        if(strcmp(package_name,packages[i].name) == 0){
            printf("Package was successfully booked\n");
            break;
        }
        if(i == size - 1 && package_name != packages[i].name){
            printf("No such package exists");
        }
    }

    return 0;
}