#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int hours = N / 3600; // 1 hour = 3600 seconds
    N %= 3600;

    int minutes = N / 60; // 1 minute = 60 seconds
    N %= 60;

    int seconds = N;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}

//Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.

//Input
//The input file contains an integer N.


