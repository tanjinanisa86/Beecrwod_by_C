#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    printf("%d\n", N);// Print the read value

    int notes[] = {100, 50, 20, 10, 5, 2, 1};
    int notesCount = sizeof(notes) / sizeof(notes[0]);
    int i;
    for ( i = 0; i < notesCount; i++) {
        int noteCount = N / notes[i];
        N %= notes[i];
        printf("%d nota(s) de R$ %d,00\n", noteCount, notes[i]);
    }

return 0;
}

//In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed. The possible banknotes are 100, 50, 20, 10, 5, 2 and 1. Print the read value and the list of banknotes.

//Input
//The input file contains an integer value N (0 < N < 1000000).
