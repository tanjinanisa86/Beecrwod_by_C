#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    double delta = (B * B) - (4 * A * C);

    if (A != 0 && delta >= 0) {
        double root1 = (-B + sqrt(delta)) / (2 * A);
        double root2 = (-B - sqrt(delta)) / (2 * A);

        printf("R1 = %.5lf\n", root1);
        printf("R2 = %.5lf\n", root2);
    } else {
        printf("Impossivel calcular\n");
    }

    return 0;
}













//Read 3 floating-point numbers. After, print the roots of bhaskara’s formula. If it's impossible to calculate the roots because a division by zero or a square root of a negative number, presents the message “Impossivel calcular”.

//Input
//Read 3 floating-point numbers (double) A, B and C.
