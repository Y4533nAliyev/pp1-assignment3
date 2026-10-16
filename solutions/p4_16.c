#include <stdio.h>

int main(){
  // shape #1
  int num1 =1;
  for(int i = 1; i <=10; i++){
    for(int j = 0; j < num1; j++){
      printf("*");
    }
    num1++;
    printf("\n");
  }

  printf("\n");
  printf("--------");
  printf("\n");
  
  // shape #2
  int num2 = 0;
  for(int i = 1; i<=10; i++){
    for(int j = 10; j > num2; j--){
      printf("*");
    }
    num2++;
    printf("\n");
  }

  printf("\n");
  printf("--------");
  printf("\n");
  
  // shape #3
  int num3 = 1;
  for(int i = 10; i > 0; i--){
    for(int j = 10; j >= num3; j--){
      printf("*");
    }
    num3++;
    printf("\n");
    for(int a = 11; a > i; a--){
      printf(" ");
    }
  }
   
  printf("\n");
  printf("--------");
  printf("\n");

  // shape #4
  int num4 = 1;
  for(int i = 10; i > 0; i--){
    for(int a = 1; a <= i; a++){
      printf(" ");
    }
    for(int j = 1; j <= num4; j++){
      printf("*");
    }
    num4++;
    printf("\n");
  }

  return 0;
}
