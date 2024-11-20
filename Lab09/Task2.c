#include <stdio.h>

void swapIntegers(int *a, int *b){

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

int main(){

    int num1, num2;
    printf("Enter first digit: ");
    scanf("%d", &num1);
    printf("Enter second digit: ");
    scanf("%d", &num2);
    
    swapIntegers(&num1, &num2);
    printf("Swapped Values\n");
    printf("Num1: %d\n", num1);
    printf("Num2: %d\n", num2);
    return 0;
}