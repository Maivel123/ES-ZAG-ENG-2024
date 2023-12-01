#include <stdio.h>
#include<stdlib.h>

int main() {
    int num1, num2, num3, num4, num5;

    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    printf("Numbers divisible by 3: ");

    if (num1 % 3 == 0) {
        printf("%d ", num1);
    }
    if (num2 % 3 == 0) {
        printf("%d ", num2);
    }
    if (num3 % 3 == 0) {
        printf("%d ", num3);
    }
    if (num4 % 3 == 0) {
        printf("%d ", num4);
    }
    if (num5 % 3 == 0) {
        printf("%d ", num5);
    }

    return 0;
}
