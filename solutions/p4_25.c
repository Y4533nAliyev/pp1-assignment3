#include <stdio.h>

int main(void) {
    printf("%-10s %-12s %-10s %-10s\n", "Decimal", "Binary", "Octal", "Hexadecimal");

    for (int i = 1; i <= 256; i++) {
        printf("%-10d ", i);

        for (int b = 8; b >= 0; b--) {
            printf("%d", (i >> b) & 1);
        }

        printf("   %-10o %-10x\n", i, i);
    }

    return 0;
}
