#include <stdio.h>

int main(void) {
    double population = 8000000000.0;
    double rate = 0.01;
    double original_pop = population;
    int double_year = 0;

    printf("%-6s %-24s %-20s\n", "Year", "Anticipated Population", "Numerical Increase");

    for (int year = 1; year <= 75; year++) {
        double increase = population * rate;
        population += increase;

        printf("%-6d %-24.0f %-20.0f\n", year, population, increase);

        if (double_year == 0 && population >= 2 * original_pop) {
            double_year = year;
        }
    }

    if (double_year != 0) {
        printf("\nPopulation doubles in year %d\n", double_year);
    } else {
        printf("\nPopulation does not double within 75 years\n");
    }

    return 0;
}
