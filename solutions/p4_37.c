#include <stdio.h>

int main(void) {
    for (int x = 1; x <= 10; x++) {
        if (x != 5) {
            printf("%d ", x);
        }
    }

    printf("\nSkipped printing 5 without using continue\n");

    return 0;
}
