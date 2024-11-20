#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct coordinate {
    int x;
    int y;
};

float calculate_distance(struct coordinate point1, struct coordinate point2){
    float x_change = point1.x - point2.x;
    float y_change = point1.y - point2.y;
    float distance = sqrt(( ( (float)pow(x_change, 2.0) ) + ((float)pow(y_change, 2.0) ) ) ); 
    return distance;
}

int main(){

    struct coordinate point1, point2;

    point1.x = 10;
    point1.y = 10;
    point2.x = 20;
    point2.y = 20;

    int length = point1.x * point2.x;
    int width = point1.y * point2.y;
    int area = length * width;

    float distance = calculate_distance(point1, point2);
    printf("Distance is %f\n", distance);

    return 0;
}