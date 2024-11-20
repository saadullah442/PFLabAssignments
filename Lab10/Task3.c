#include <stdio.h>
#include <ctype.h>
#define MAX_TEMP 300

int main(){

    int temp = 0;
    char proceed = 'n';
    int count = 0;
    do{
        printf("Enter temperature in Celcius: ");
        scanf("%d", &temp);
        if(temp > MAX_TEMP) count++;
        printf("Do you want to continue (y/n): ");
        scanf(" %c", &proceed);
        
    }while(tolower(proceed) == 'y');
    printf("%d\n", count);

    return 0;
}