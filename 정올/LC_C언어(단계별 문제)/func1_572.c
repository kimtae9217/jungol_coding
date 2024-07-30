#include <stdio.h>

double circleArea(double r);

int main(){
    
    int radius;

    scanf("%d", &radius);
    circleArea(radius);

    return 0;
}

double circleArea(double r){

    double area = 3.14 * r * r;
    printf("%.2f", area);

    return r;   
}