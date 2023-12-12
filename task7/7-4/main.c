

#include <stdio.h>

void reverseArray(int array[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {

        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int n, i;
    int array[100];

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    reverseArray(array, n);

    printf("Reversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
