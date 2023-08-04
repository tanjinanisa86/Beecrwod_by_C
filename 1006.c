#include <stdio.h>

int main() {
    double A,B,C;
    double average;

    // Read the three grades
    scanf("%lf %lf %lf", &A, &B, &C);

    // Calculate the weighted average
    average = (A * 2 + B * 3 + C * 5) / (2+3+5);

    // Print the result with 1 digits after the decimal point
    printf("MEDIA = %.1lf\n", average);

    return 0;
}


