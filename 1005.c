#include <stdio.h>

int main() {
    double p,q;
    double average;

    // Read the two grades
    scanf("%lf %lf", &p, &q);

    // Calculate the weighted average
    average = (p * 3.5 + q * 7.5) / (3.5 + 7.5);

    // Print the result with 5 digits after the decimal point
    printf("MEDIA = %.5lf\n", average);

    return 0;
}




