#include <stdio.h>

int main() {
    int ageInDays;
    scanf("%d", &ageInDays);

    int years = ageInDays / 365; // 1 year = 365 days
    ageInDays %= 365;

    int months = ageInDays / 30; // 1 month = 30 days
    ageInDays %= 30;

    int days = ageInDays;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);

    return 0;
}
//Read an integer value corresponding to a person's age (in days) and print it in years, months and days, followed by its respective message “ano(s)”, “mes(es)”, “dia(s)”.

//Note: only to facilitate the calculation, consider the whole year with 365 days and 30 days every month. In the cases of test there will never be a situation that allows 12 months and some days, like 360, 363 or 364. This is just an exercise for the purpose of testing simple mathematical reasoning.

//Input
//The input file contains 1 integer value.






