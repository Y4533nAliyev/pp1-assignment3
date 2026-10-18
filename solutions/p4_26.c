#include <stdio.h>

int main(void) {
    double pi = 0.0;
    long term314 = 0;
    long term3141 = 0;
    long term31415 = 0;
    long term314159 = 0;

    printf("%-10s %-20s\n", "Terms", "Approximation");

    for (long i = 1; i <= 200000; i++) {
        if (i % 2 != 0) {
            pi += 4.0 / (2 * i - 1);
        } else {
            pi -= 4.0 / (2 * i - 1);
        }

        if (i <= 20) {
            printf("%-10ld %-20.6f\n", i, pi);
        }

        if (term314 == 0 && (long)(pi * 100) == 314) {
            term314 = i;
        }
        if (term3141 == 0 && (long)(pi * 1000) == 3141) {
            term3141 = i;
        }
        if (term31415 == 0 && (long)(pi * 10000) == 31415) {
            term31415 = i;
        }
        if (term314159 == 0 && (long)(pi * 100000) == 314159) {
            term314159 = i;
        }
    }

    printf("\nTerms to first get:\n");
    printf("3.14:    %ld\n", term314);
    printf("3.141:   %ld\n", term3141);
    printf("3.1415:  %ld\n", term31415);
    printf("3.14159: %ld\n", term314159);

    return 0;
}
