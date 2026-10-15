#include <stdio.h>

int main(){
  int num;
  int factorial = 1;
  num = 5;
  for(int i = 0; i <= num; i++){
    factorial = 1;
    for(int j = i; j > 0; j--){
      factorial *= j;
    }
    printf("%d! = %d\n", i, factorial);
  }
  return 0;
}
