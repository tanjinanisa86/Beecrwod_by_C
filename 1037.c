#include <stdio.h>

int main() {
    double number;
    scanf("%lf", &number);

    if (number >= 0 && number <= 25) {
        printf("Intervalo [0,25]\n");
    } else if (number > 25 && number <= 50) {
        printf("Intervalo (25,50]\n");
    } else if (number > 50 && number <= 75) {
        printf("Intervalo (50,75]\n");
    } else if (number > 75 && number <= 100) {
        printf("Intervalo (75,100]\n");
    } else {
        printf("Fora de intervalo\n");
    }

    return 0;
}











//You must make a program that read a float-point number and print a message saying in which of following intervals the number belongs: [0,25] (25,50], (50,75], (75,100]. If the read number is less than zero or greather than 100, the program must print the message �Fora de intervalo� that means "Out of Interval".

//The symbol '(' represents greather than. For example:
//[0,25] indicates numbers between 0 and 25.0000, including both.
//(25,50] indicates numbers greather than 25 (25.00001) up to 50.0000000.
//Input
//The input file contains a floating-point number.
