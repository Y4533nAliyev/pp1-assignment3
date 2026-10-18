#include <stdio.h>

int main(){
  int quantity;
  int productNumber;
  double totalRetailValue = 0;
  

  printf("Write the product number: ");
  scanf("%d", &productNumber);
  while(productNumber != -1){


    printf("Write the Quantity: ");
    scanf("%d", &quantity);
  
   switch(productNumber){
    case 1:
      totalRetailValue += quantity * 2.98;
      break;
    case 2:
      totalRetailValue += quantity * 4.50;
      break;
    case 3:
      totalRetailValue += quantity * 9.98;
      break;
    case 4:
      totalRetailValue += quantity * 4.49;
      break;
    case 5:
      totalRetailValue += quantity * 6.87;
      break;
    default:
      printf("Invalid Number\n");
      break;
  }
    printf("Write the product number: ");
    scanf("%d", &productNumber);
  }
  printf("The total retail value is: %.2lf\n", totalRetailValue);
  return 0;
}
