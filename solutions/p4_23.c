#include <stdio.h>
#include <math.h>

int main(){
  int principal = 1000;
  int rate = 5;

  printf("%4s%21s\n", "Year", "Amount on deposit");
  for( unsigned int year = 1; year <= 10; ++year){
    int amount = principal * pow(1 + (rate / 100), year);

    printf("%4u%21.2d\n", year, amount);
  }

  return 0;
}
