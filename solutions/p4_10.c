#include <stdio.h>

int main(){
  double farenheit;
  double celcius;
  printf("Celcius  Farenheit\t");
  printf("\n");
  for(celcius = 30; celcius <= 50; celcius++){
    farenheit = (celcius * 9 /5) + 32;
    printf("%.2lfC -> %.2lfF\n", celcius, farenheit);
  }
  return 0;
}
