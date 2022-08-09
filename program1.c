#include <stdio.h>
#include <stdlib.h>

int main() {

    double num1;
    double num2;

    printf("Enter number 1: ");
    scanf("%lf", &num1);

    
    printf("Enter number 2: ");
    scanf("%lf", &num2);

    printf("Sum of num1 and num2 is : %f ", num1+ num2);

    return 0;
}