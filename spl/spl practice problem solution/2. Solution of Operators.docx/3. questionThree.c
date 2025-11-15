#include<stdio.h>

int main()
{
    float a, b, x;

    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);

    x = (3.31 * (a * a) + 2.01 * (b * b * b)) / (7.16 * (b * b) + 2.01 * (a * a * a));

    printf("\nX = %f", x);

    printf("\n");
    return 0;
}
