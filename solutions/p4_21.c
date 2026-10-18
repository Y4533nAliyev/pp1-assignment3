#include <stdio.h>

int main(){
  int counter = 0;
  for(int i = 0; i < 128; i++){
    printf("%c", i);
    counter++;

    if(counter == 10){
      counter = 0;
      printf("\n");
    }
  }
  return 0;
}
