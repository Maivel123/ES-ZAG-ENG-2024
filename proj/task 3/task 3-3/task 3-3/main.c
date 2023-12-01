#include <stdio.h>
#include <stdlib.h>



int main() {
    double base, power, result = 1.0;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the power: ");
    scanf("%lf", &power);

    // Calculate the power using a loop
    for (int i = 1; i <= power; i++) {
        result *= base;
    }

    printf("%.2lf raised to the power %.2lf is %.2lf\n", base, power, result);

    return 0;
}
