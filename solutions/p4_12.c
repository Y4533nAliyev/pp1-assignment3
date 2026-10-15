#include <stdio.h>

int main(){
  for(int i = 0; i < 100; i++){
    int a = 0;
    for(int j = 2; j < i; j++){
      if(i % j == 0){
        a = 1;
      }
    }
    if(a != 1 && i != 1 && i != 0){
      printf("%d\n", i);
    }
  }
  return 0;
}
