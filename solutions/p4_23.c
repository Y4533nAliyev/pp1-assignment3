#include <stdio.h>

int main(void)
{
   int principal = 100000; 
   int rate = 5;           
   int amount = principal; 

   printf("%4s%21s\n", "Year", "Amount on deposit");

   for (unsigned int year = 1; year <= 10; ++year) {

      amount = amount + (amount * rate) / 100;

      int dollars = amount / 100; 
      int cents = amount % 100;   

      printf("%4u%18d.%02d\n", year, dollars, cents);
   }

   return 0;
}
