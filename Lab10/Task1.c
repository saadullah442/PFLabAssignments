#include <stdio.h>

void print_arr(int arr[100], int size, int start){

    if(start == size - 1) {
        printf("%d\n", arr[start]);
        return;
    }

    printf("%d\n", arr[start]);
    print_arr(arr, size, start + 1);
}


int main(){
    int i, size;
    printf("Enter number of integers: ");
    scanf("%d", &size);
    int arr[size];
    for(i=0; i< size;i++){
        printf("Enter integer: ");
        scanf("%d", &arr[i]);
    }
    print_arr(arr, size, 0);


    return 0;
}