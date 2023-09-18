#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    if (A % B == 0 || B % A == 0) {
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }

    return 0;
}

//Read two integer values (A and B). After, the program should print the message "Sao Multiplos" (are multiples) or "Nao sao Multiplos" (aren’t multiples), corresponding to the read values.
//Input
//The input has two integer numbers
