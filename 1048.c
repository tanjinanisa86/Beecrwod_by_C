#include <stdio.h>

int main() {
    double salary, newSalary, earnedMoney;
    int increasePercentage;

    // Input employee's salary
    scanf("%lf", &salary);

    // Calculate new salary and earned money based on the given table
    if (salary <= 400.00) {
        increasePercentage = 15;
    } else if (salary <= 800.00) {
        increasePercentage = 12;
    } else if (salary <= 1200.00) {
        increasePercentage = 10;
    } else if (salary <= 2000.00) {
        increasePercentage = 7;
    } else {
        increasePercentage = 4;
    }

    earnedMoney = salary * (increasePercentage / 100.0);
    newSalary = salary + earnedMoney;

    // Print the results
    printf("Novo salario: %.2lf\n", newSalary);
    printf("Reajuste ganho: %.2lf\n", earnedMoney);
    printf("Em percentual: %d %%\n", increasePercentage);

    return 0;
}
