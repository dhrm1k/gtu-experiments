/*
 * Author: Dharmik
 * Description: to find area of triangle(a=h*b*.5)
 */

#include <stdio.h>

int main(){
    double height;
    printf("Enter height of the triangle: ");
    scanf("%lf", &height);

    double base;
    printf("Enter base of the triangle: ");
    scanf("%lf", &base);

    printf("Area of the triangle is: %f", height*base*.5 );
    return 0;
}

// I also wanted to practice with functions, so below is a function that also works.

double area(double base, double height) {
    double result = base * height * .5;
    return result;
}

int main() {
    printf("%lf", area(2,2));
}
