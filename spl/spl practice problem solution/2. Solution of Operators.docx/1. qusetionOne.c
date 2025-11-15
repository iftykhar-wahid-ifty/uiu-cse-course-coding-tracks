#include<stdio.h>

int main()
{
    float x, y, addition, subtraction, multiplication, remainder;
    int quotient;

    printf("Enter x: ");
    scanf("%f", &x);
    printf("Enter y: ");
    scanf("%f", &y);

    addition = x + y;
    subtraction = x - y;
    multiplication = x * y;

    if(y != 0){
        quotient = (int)(x / y);
        remainder = x - (quotient * y);
    }else{
        printf("Error: Division by zero");
        return 0;
    }

    /*
        remainder = x - (quotient * y);  // comes from the division algorithm.

        Mathematical explanation:
        X = (Q × Y) + R      where:
            X = dividend
            Y = divisor
            Q = quotient
            R = remainder

        Rearranging:
        R = X - (Q × Y)
    */

    printf("\nAddition: %.2f\n", addition);
    printf("Subtraction: %.2f\n", subtraction);
    printf("Multiplication: %.2f\n", multiplication);
    printf("Quotient: %d\n", quotient);
    printf("Reminder: %.2f\n", remainder);

    printf("\n");
    return 0;
}
