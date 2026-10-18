#include <stdio.h>

int main(void) {
    int x;

    for (x = 1; x <= 10 && x != 5; x++) {
        printf("%d ", x);
    }

    printf("\nBroke out of loop at x == %d\n", x);

    return 0;
}
