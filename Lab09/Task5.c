#include <stdio.h>
#include <string.h>

void reverse(char str[100], char reverse_str[100]){
    int i = 0;
    int j = strlen(str) - 1;
    for(i = 0; i < strlen(str); i++){
        printf("%c\n", str[i]);
        reverse_str[j] = str[i];
        j--;
    }
    reverse_str[i] = '\0';

}

int main(){

    char str1[100];
    char reverse_str[100];
    printf("Enter string: ");
    gets(str1);
    reverse(str1, reverse_str);
    printf("%s", reverse_str);
    return 0;
}