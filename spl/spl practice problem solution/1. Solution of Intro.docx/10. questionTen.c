#include<stdio.h>

int main(){

    long int longInt = 2147483647;
    long long int longLongInt = 9223372036854775807;
    long double longDouble = 1.1e+4932L;
    short int shortInt = 32767;

    printf("The long int value: %ld\n", longInt);
    printf("The long long int value: %lld\n", longLongInt);
    printf("The long double value: %Le\n", longDouble);
    printf("The short int value: %hd\n\n\n", shortInt);

    longInt = -2147483648;
    longLongInt = -9223372036854775808;
    longDouble = 3.4E-4932;
    shortInt = -32768;

    printf("The long int value: %ld\n", longInt);
    printf("The long long int value: %lld\n", longLongInt);
    printf("The long double value: %Le\n", longDouble);
    printf("The short int value: %hd", shortInt);

    return 0;
}
