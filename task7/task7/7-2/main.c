
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_CLASSES 3
#define NUM_STUDENTS 10
#define MIN_PASSING_GRADE 50
#define MAX_GRADE 100




int getRandomGrade() {
    return rand() % (MAX_GRADE + 1);
}

int main() {
    int classes[NUM_CLASSES][NUM_STUDENTS];
    int passedCount = 0, failedCount = 0;
    int highestGrade = 0, lowestGrade = MAX_GRADE;
    int totalGrade = 0;
    float averageGrade;
    int i, j;


    srand(time(NULL));


    for (i = 0; i < NUM_CLASSES; i++) {
        for (j = 0; j < NUM_STUDENTS; j++) {
            classes[i][j] = getRandomGrade();
        }
    }


    for (i = 0; i < NUM_CLASSES; i++) {
        for (j = 0; j < NUM_STUDENTS; j++) {

            if (classes[i][j] >= MIN_PASSING_GRADE) {
                passedCount++;
            } else {
                failedCount++;
            }


            if (classes[i][j] > highestGrade) {
                highestGrade = classes[i][j];
            }
            if (classes[i][j] < lowestGrade) {
                lowestGrade = classes[i][j];
            }


            totalGrade += classes[i][j];
        }
    }


    averageGrade = (float) totalGrade / (NUM_CLASSES * NUM_STUDENTS);


    printf("Number of passed students: %d\n", passedCount);
    printf("Number of failed students: %d\n", failedCount);
    printf("Highest grade: %d\n", highestGrade);
    printf("Lowest grade: %d\n", lowestGrade);
    printf("Average grade: %.2f\n", averageGrade);

    return 0;
}
