#include <stdio.h>

int main(void) {
    int match = 1;

    for (int x = 0; x <= 10; x++) {
        for (int y = 0; y <= 10; y++) {
            int original = !(x < 5) && !(y >= 7);
            int equivalent = !((x < 5) || (y >= 7));

            if (original != equivalent) {
                match = 0;
            }
        }
    }
    printf("a) Equivalent: %s\n", match ? "True" : "False");

    match = 1;
    for (int a = 0; a <= 5; a++) {
        for (int b = 0; b <= 5; b++) {
            for (int g = 0; g <= 10; g++) {
                int original = !(a == b) || !(g != 5);
                int equivalent = !((a == b) && (g != 5));

                if (original != equivalent) {
                    match = 0;
                }
            }
        }
    }
    printf("b) Equivalent: %s\n", match ? "True" : "False");

    match = 1;
    for (int x = 0; x <= 10; x++) {
        for (int y = 0; y <= 10; y++) {
            int original = !((x <= 8) && (y > 4));
            int equivalent = !(x <= 8) || !(y > 4);

            if (original != equivalent) {
                match = 0;
            }
        }
    }
    printf("c) Equivalent: %s\n", match ? "True" : "False");

    match = 1;
    for (int i = 0; i <= 10; i++) {
        for (int j = 0; j <= 10; j++) {
            int original = !((i > 4) || (j <= 6));
            int equivalent = !(i > 4) && !(j <= 6);

            if (original != equivalent) {
                match = 0;
            }
        }
    }
    printf("d) Equivalent: %s\n", match ? "True" : "False");

    return 0;
}
