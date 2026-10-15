#include <stdio.h>

int main(){
  int sum;
  for(int i = 0; i < 100; i += 7){
    sum += i;
  }
  printf("%d\n", sum);
  return 0;
}
