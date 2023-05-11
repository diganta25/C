#include<stdio.h>

int main(){

    double radius;
    const double PI = 3.14159;
    double circumference;
    double area;

    printf("\nEnter radius of a circle : ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\nCircumference = %lf units", circumference); 
    printf("\nArea = %lf units", area);

    return 0;
}