#include<stdio.h>

int main()
{
    int integerValue = 5;
    float floatValue = 3.141593;
    char characterValue = 'a';

    printf("The integer value: %d\n", integerValue);
    printf("The floating point value: %f\n", floatValue);
    printf("The character value: %c\n\n", characterValue);


    integerValue = 100;
    floatValue = 1.618000;
    characterValue = 'z';

    printf("The integer value: %d\n", integerValue);
    printf("The floating point value: %f\n", floatValue);
    printf("The character value: %c", characterValue);


    return 0;
}
