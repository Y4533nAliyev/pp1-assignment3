#include <stdio.h>

int main(void) {
    unsigned int countA = 0;
    unsigned int countB = 0;
    unsigned int countC = 0;
    unsigned int countD = 0;
    unsigned int countF = 0;

    puts("Input the letter grades (press EOF to finish):");

    int inputChar;
    while ((inputChar = getchar()) != EOF) {
        switch (inputChar) {
            case 'A':
            case 'a':
                countA++;
                break;
            case 'B':
            case 'b':
                countB++;
                break;
            case 'C':
            case 'c':
                countC++;
                break;
            case 'D':
            case 'd':
                countD++;
                break;
            case 'F':
            case 'f':
                countF++;
                break;
            case '\n':
            case '\t':
            case ' ':
                break; // Ignore whitespace characters
            default:
                printf("Invalid grade character entered.\n");
                break;
        }
    }

    printf("\nFinal Grade Totals:\n");
    printf("A: %u\n", countA);
    printf("B: %u\n", countB);
    printf("C: %u\n", countC);
    printf("D: %u\n", countD);
    printf("F: %u\n", countF);
    
    double totalGradePoints = (countA * 4 +  countB * 3 + countC * 2 + countD * 1 + countF * 0);

    double totalGrade = totalGradePoints / (countA +  countB + countC +countD +countF);
    
    if(totalGrade <= 4 && totalGrade > 3.5){
    printf("The Average Grade is A\n");
    } else if(totalGrade <= 3.5 && totalGrade >= 2.5){
    printf("The Average Grade is B\n");
    } else if(totalGrade < 2.5 && totalGrade >= 1.5){
    printf("The Average Grade is C\n");
    } else if(totalGrade < 1.5 && totalGrade > 0.5){
    printf("The Average Grade is D\n");
    } else{
    printf("The Average Grade is F\n");
    }
  return 0;
}

