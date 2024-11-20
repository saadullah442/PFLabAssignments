#include <stdio.h>

void linear_search(int arr[],int element, int size, int current_index){
    // Base case
    // If element found exit function
    if(arr[current_index] == element) {
        printf("Element found is: %d\n", element);
        return;
    }

    // Another Base case
    if (current_index == size - 1) {
        printf("Element not found\n");
        return;
    }


    //Recursive case
    linear_search(arr, element, size, current_index + 1);
}

int main(){
    int arr[] = {1,5,7,9,10,332,444,999};
    // Size of array
    int size = sizeof(arr)/sizeof(arr[0]);
    // Calling linear search fucntion with different parameters
    linear_search(arr, 444, size, 0);
    linear_search(arr, -1, size, 0);
    linear_search(arr, 1, size, 0);
    linear_search(arr, 999, size, 0);
    return 0;
}