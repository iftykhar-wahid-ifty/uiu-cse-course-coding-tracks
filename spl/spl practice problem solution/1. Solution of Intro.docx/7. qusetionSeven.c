#include<stdio.h>

int main()
{
    int integerValue;
    float floatValue;
    char characterValue;

    printf("Enter the int value: ");
    scanf("%d", &integerValue);
    printf("Enter the float value: ");
    scanf("%f", &floatValue);
    getchar();
    printf("Enter the char value: ");
    scanf("%c", &characterValue);

    printf("\nThe integer value: %d\n", integerValue);
    printf("The floating point value: %f\n", floatValue);
    printf("The character value: %c", characterValue);


    return 0;
}
