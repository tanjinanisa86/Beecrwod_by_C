#include <stdio.h>

int main() {
    double A, B, C;
    
    // Input sides of the triangle
    scanf("%lf %lf %lf", &A, &B, &C);
    
    // Arrange sides in decreasing order
    if (A < B) {
        double temp = A;
        A = B;
        B = temp;
    }
    if (A < C) {
        double temp = A;
        A = C;
        C = temp;
    }
    if (B < C) {
        double temp = B;
        B = C;
        C = temp;
    }
    
    // Check triangle conditions and print appropriate message
    if (A >= B + C) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (A * A == B * B + C * C) {
            printf("TRIANGULO RETANGULO\n");
        }
        if (A * A > B * B + C * C) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (A * A < B * B + C * C) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (A == B && B == C) {
            printf("TRIANGULO EQUILATERO\n");
        }
        if ((A == B && B != C) || (A == C && C != B) || (B == C && C != A)) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    
    return 0;
}
