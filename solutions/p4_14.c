#include <stdio.h>

int factorial(int n);

int main(void){

    printf("n\t n!\t\n");

    for(int i = 1; i <= 5; i++){
        printf("%d\t %d\t\n", i, factorial(i));
    }
}

int factorial(int n){
    int f = 1;

    for(int i = 1; i <= n; i++){
        f *= i;
    }

    return f;
}
//If we try to get 20!, then there will be overflow. However, if we use long long instead of integers, it will work.
