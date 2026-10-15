#include <stdio.h>

int main(){
  int num;
  int sum;
  int sumofSquares;
  int sumofCubes;

  printf("Please enter a number: ");
  scanf("%d", &num);

  for(int i = 0; i <= num; i++){
    sum += i;
    sumofSquares += i*i;
    sumofCubes += i*i*i;
  }

  printf("Sum: %d\n", sum);
  printf("Sum of Squares: %d\n", sumofSquares);
  printf("Sum of Cubes: %d\n", sumofCubes);

  return 0;
}
