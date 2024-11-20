#include <stdio.h>


void bubble_sort(int arr[], int size, int start, int index){
    int temp;
    // when all the elements are checked
    if (start == 0) {
        return;

    } 
    // when a element is checked through out the array
    else if (index == size - 1){
        return;
    }
    if(arr[index] > arr[index + 1]) {
        temp = arr[index + 1];
        arr[index + 1] = arr[index];
        arr[index] = temp;
    }
    // This will run size times for each element
    bubble_sort(arr, size, start, index + 1);

    // To call to check each element
    bubble_sort(arr, size, start - 1, 0);

}

int main(){
    int size;
    printf("Specify size of array: ");
    scanf("%d", &size);
    
    int arr[size];
    int i = 0;
    for(i=0;i<size;i++){
        printf("Enter a integer: ");
        scanf("%d", &arr[i]);
    }
    bubble_sort(arr, size, size, 0);
    for(i=0;i < size; i++){
        printf("%d ", arr[i]);
    }
    return 0;

}