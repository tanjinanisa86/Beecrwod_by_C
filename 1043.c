#include <stdio.h>

int main() {
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    if ((A + B > C) && (A + C > B) && (B + C > A)) {
        double perimeter = A + B + C;
        printf("Perimetro = %.1lf\n", perimeter);
    } else {
        double area = 0.5 * (A + B) * C;
        printf("Area = %.1lf\n", area);
    }

    return 0;
}

//Read three point floating values (A, B and C) and verify if is possible to make a triangle with them. If it is possible, calculate the perimeter of the triangle and print the message:
//Perimetro = XX.X
//If it is not possible, calculate the area of the trapezium which basis A and B and C as height, and print the message:
//Area = XX.X
//Input
//The input file has tree floating point numbers.


