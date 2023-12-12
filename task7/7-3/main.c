

#include <stdio.h>

int main() {
    int n, i;
    int array[100];
    int sum = 0;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    printf("Sum of the integers: %d\n", sum);

    return 0;
}
