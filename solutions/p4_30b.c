#include <stdio.h>

int main(void) {
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;

    printf("Enter the letter grades.\n");
    printf("Enter the EOF character to end input.\n");

    int grade;

    while ((grade = getchar()) != EOF) {
        int matched = 0;

        if (grade == 'A' || grade == 'a') {
            aCount++;
            matched = 1;
        }
        if (grade == 'B' || grade == 'b') {
            bCount++;
            matched = 1;
        }
        if (grade == 'C' || grade == 'c') {
            cCount++;
            matched = 1;
        }
        if (grade == 'D' || grade == 'd') {
            dCount++;
            matched = 1;
        }
        if (grade == 'F' || grade == 'f') {
            fCount++;
            matched = 1;
        }
        if (grade == ' ' || grade == '\t' || grade == '\n') {
            matched = 1;
        }
        if (!matched) {
            printf("Incorrect letter grade entered. Enter a new grade.\n");
        }
    }

    printf("\nTotals for each letter grade are:\n");
    printf("A: %d\n", aCount);
    printf("B: %d\n", bCount);
    printf("C: %d\n", cCount);
    printf("D: %d\n", dCount);
    printf("F: %d\n", fCount);

    return 0;
}
