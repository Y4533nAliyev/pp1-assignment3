#include <stdio.h>

int main() {
    int paycode;

    printf("Enter paycode (-1 to end): ");
    scanf("%d", &paycode);

    while (paycode != -1) {
        double pay = 0.0;

        switch (paycode) {
            case 1: {
                double salary;
                printf("Enter weekly salary: ");
                scanf("%lf", &salary);
                pay = salary;
                printf("Worker's pay is: $%.2f\n\n", pay);
                break;
            }
            case 2: {
                double wage;
                double hours;
                printf("Enter hourly wage: ");
                scanf("%lf", &wage);
                printf("Enter hours worked: ");
                scanf("%lf", &hours);

                if (hours <= 40.0) {
                    pay = hours * wage;
                } else {
                    pay = 40.0 * wage + (hours - 40.0) * wage * 1.5;
                }
                printf("Worker's pay is: $%.2f\n\n", pay);
                break;
            }
            case 3: {
                double sales;
                printf("Enter gross weekly sales: ");
                scanf("%lf", &sales);
                pay = 250.0 + 0.057 * sales;
                printf("Worker's pay is: $%.2f\n\n", pay);
                break;
            }
            case 4: {
                int pieces;
                double wage_per_piece;
                printf("Enter number of pieces produced: ");
                scanf("%d", &pieces);
                printf("Enter wage per piece: ");
                scanf("%lf", &wage_per_piece);
                pay = pieces * wage_per_piece;
                printf("Worker's pay is: $%.2f\n\n", pay);
                break;
            }
            default:
                printf("Invalid paycode.\n\n");
                break;
        }

        printf("Enter paycode (-1 to end): ");
        scanf("%d", &paycode);
    }

    return 0;
}
