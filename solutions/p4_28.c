#include <stdio.h>

int main(void){
    int paycode;
    double weeklySalary, hourlyWage;
    double hours;
    double grossSales;
    double pricePerItem;
    double pay;
    int items;

    

    while(1){
        printf("Enter paycode (1 for Manager, 2 for Hourly, 3 for Commission, 4 for Piecework, -1 to quit): ");
        scanf("%d", &paycode);
        if(paycode == -1){
            break;
        }
        switch(paycode){

            case 1:
                printf("Enter weekly salary: ");
                scanf("%lf", &weeklySalary);
                pay = weeklySalary;
                printf("Manager's pay is $%.2f\n", pay);
                break;

            case 2:
                printf("Enter hourly wage: ");
                scanf("%lf", &hourlyWage);
                printf("Enter hours worked: ");
                scanf("%lf", &hours);

                if(hours <=40){
                    pay = hourlyWage * hours;
                }else{
                    pay = hourlyWage*40+(hours-40)*hourlyWage*1.5;
                }
                printf("Hourly worker's pay is $%.2f\n", pay);
                break;

            case 3:
                printf("Enter gross weekly sales: ");
                scanf("%lf", &grossSales);
                pay = 250+0.057*grossSales;
                printf("Commission worker's pay is $%.2f\n", pay);
                break;

            case 4:
                printf("Enter amount paid per item: ");
                scanf("%lf", &pricePerItem);
                printf("Enter number of items produced: ");
                scanf("%d", &items);
                pay = pricePerItem * items;
                printf("Pieceworker's pay is $%.2f\n", pay);
                break;

            default:
                printf("Invalid \n");
                break;
        }
    }
}
