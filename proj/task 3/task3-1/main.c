#include <stdio.h>
#include<stdlib.h>


void printFloydsTriangle(int n) {
    int count = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("Floyd's Triangle:\n");
    printFloydsTriangle(n);

    return 0;
}
