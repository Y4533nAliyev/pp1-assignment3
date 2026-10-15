#include <stdio.h>

int main(){
  int count;
  int integer;
  int sum;
  double average;
  scanf("%d", &count);

  for(int i = 0; i < count; i++){
    scanf("%d", &integer);
    sum += integer;
  }
  average = (double)sum / count;
  printf("The sum is: %d\n", sum);
  printf("The average is: %.2lf\n", average);
}
