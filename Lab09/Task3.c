#include <stdio.h>

int is_prime(int num){

    int i=0;
    int factors = 0;
    for(i=1;i <= num; i++){
        if(num % i == 0) factors++;
    }
    if(factors == 2) return 1;
    return 0;

}

int main(){

    int num;
    printf("Enter a integer: ");
    scanf("%d", &num);
    int prime = is_prime(num);
    if(prime == 1) printf("Number is a prime number");
    else {
        printf("Number is not prime");
    }
    
    return 0;
}