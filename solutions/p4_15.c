#include <stdio.h>
#include <math.h>

int main(){
  double principal = 1000.0;
  for (unsigned int rate = 5; rate <= 10; ++rate) {
    printf("\n--- Interest Rate: %u%% ---\n", rate);
    printf("%4s%21s\n", "Year", "Amount on deposit");

    for(unsigned int year = 1; year <= 10; ++year){
      double amount = principal * pow(1.0 + (rate / 100.00), year);

      printf("%4u%21.2f\n", year, amount);
  }
  }
}
