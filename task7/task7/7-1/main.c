
#include <stdlib.h>

#include <stdio.h>

int main() {
    int values[10];
    int i, min, max;

    printf("Enter 10 values:\n");


    for (i = 0; i < 10; i++) {
        scanf("%d", &values[i]);
    }


    min = max = values[0];


    for (i = 1; i < 10; i++) {
        if (values[i] < min) {
            min = values[i];
        }
        if (values[i] > max) {
            max = values[i];
        }
    }

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}
