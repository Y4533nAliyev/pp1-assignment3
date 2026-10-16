#include <stdio.h>

int determine(double limitPreRecession, double currentBalance);

int main(){
  for(int i = 0; i < 3; i++){
    int accountNumber;
    double limitPreRecession;
    double currentBalance;
    printf("Please enter account number: ");
    scanf("%d", &accountNumber);
    printf("Please enter limit(pre-recession): ");
    scanf("%lf", &limitPreRecession);
    printf("Please enter current balance: ");
    scanf("%lf", &currentBalance);
    printf("\n");
    if(determine(limitPreRecession, currentBalance)){
      printf("The Account Number: #%d, Exceeds the limit.\n", accountNumber);
      printf("\n");
      printf("New limit: %.2lf\n", limitPreRecession / 2);
      printf("current Balance: %.2lf\n", currentBalance);
    }
  }
  return 0;
}

int determine(double limitPreRecession, double currentBalance){
  
  double limitPostRecession = limitPreRecession / 2;

  if(currentBalance > limitPostRecession){
    return 1;
  }
  return 0;
}
