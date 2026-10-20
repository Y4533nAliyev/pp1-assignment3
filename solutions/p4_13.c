#include <stdio.h>

int main(void){

    int num;

    printf("Enter a natural number: ");
    scanf("%d", &num);

    int sum =0;

    for(int i=1; i<=num; i++){
        sum += i;
    }
    
    int sumOfSquares = num*(num+1)*(2*num+1)/6;
    int sumOfCubes = sum*sum;

    printf("Sum is %d\n", sum);
    printf("Sum of squares is %d\n", sumOfSquares);
    printf("Sum of cubes is %d\n", sumOfCubes); 

}
