#include <stdio.h>

int main(){
  int user[5];
  for(int i =0 ; i < 5; i++){
  printf("Write a number: ");
    scanf("%d", &user[i]);
    if(user[i] > 30 || user[i] < 1){
      printf("Keep the numbers between 1-30");
      break;
    }
  }
  printf("\n");
  for(int i =0 ; i < 5; i++){
    for(int j = 0; j < user[i]; j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
