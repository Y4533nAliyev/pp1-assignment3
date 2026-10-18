#include <stdio.h>

int main(void) {
    int rows;

    do {
        printf("Enter an odd number (1-19): ");
        scanf("%d", &rows);
    } while (rows < 1 || rows > 19 || rows % 2 == 0);

    int mid = (rows + 1) / 2;

    for (int i = 1; i <= mid; i++) {
        for (int j = 1; j <= mid - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = mid - 1; i >= 1; i--) {
        for (int j = 1; j <= mid - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
