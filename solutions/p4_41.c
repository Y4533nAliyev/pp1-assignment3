#include <stdio.h>

int main(void) {
    float housing, food, clothing, transportation, education, healthcare, vacations;
    float total, tax;

    printf("Enter housing expenses: ");
    scanf("%f", &housing);

    printf("Enter food expenses: ");
    scanf("%f", &food);

    printf("Enter clothing expenses: ");
    scanf("%f", &clothing);

    printf("Enter transportation expenses: ");
    scanf("%f", &transportation);

    printf("Enter education expenses: ");
    scanf("%f", &education);

    printf("Enter health care expenses: ");
    scanf("%f", &healthcare);

    printf("Enter vacations expenses: ");
    scanf("%f", &vacations);

    total = housing + food + clothing + transportation + education + healthcare + vacations;
    tax = total * 0.23;

    printf("\nTotal Expenses: $%.2f\n", total);
    printf("Estimated FairTax (23 percent): $%.2f\n", tax);

    return 0;
}