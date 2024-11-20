#include <stdio.h>

int arithmetic(int num1, int num2, char op){
    int ans = 0;
    if (op == '+'){
        ans = num1 + num2;
    }
    else if(op == '-'){
        ans = num1 - num2;
    }
    else if(op == '/'){
        ans = num1 / num2;
    }
    else if(op == '*') {
        ans = num1 * num2;
    }
    else {
        ans = num1 % num2;
    }

    return ans;
}

int main(){
    int num1, num2;
    char operator;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf(" %d", &num2);
    printf("Enter operator: ");
    scanf(" %c", &operator);

    int answer = arithmetic(num1, num2, operator);
    printf("%d", answer);
    return 0;
}