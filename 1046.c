#include <stdio.h>

int main() {
    int start, end, duration;

    // Input start and end times
    scanf("%d %d", &start, &end);

    // Calculate the duration
    if (start < end) {
        duration = end - start;
    } else {
        duration = 24 - start + end;
    }

    // Print the duration
    printf("O JOGO DUROU %d HORA(S)\n", duration);

    return 0;
}
