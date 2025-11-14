#include<stdio.h>

int main()
{
    float num;

    printf("Enter a float value: ");
    scanf("%f", &num);

    printf("(a) Val:%12f\n", num);
    printf("(b) Val:%f\n", num);
    printf("(c) Val:%.2f\n", num);
    printf("(d) Val:%.0f\n", num);
    printf("(e) Val:%e", num);

    printf("\n");
    return 0;
}
