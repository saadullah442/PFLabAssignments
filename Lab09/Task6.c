#include <stdio.h>


int find_elem(int arr[100], int size){

    int i = 0;
    int j = 0;
    int max = 0;
    int min = 9999;
    for(i=0;i<size;i++){
        for(j=i;j< size; j++){
           if(arr[j] > max) max = arr[j];
           if(arr[j] < min) min = arr[j]; 
        }
    }

    printf("Maximum: %d\n", max);
    printf("Mininum: %d\n", min);
}

int main(){

    int i = 0;
    int size = 0;
    printf("Enter number of integers to add: ");
    scanf("%d", &size);
    int arr[size];
    for(;i < size; i++){
        printf("Enter integer: ");
        scanf("%d", &arr[i]);
    }
    find_elem(arr, size);
    return 0;
}