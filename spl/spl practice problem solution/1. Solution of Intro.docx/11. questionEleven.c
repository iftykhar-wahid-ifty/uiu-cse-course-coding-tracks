#include<stdio.h>

int main()
{
    unsigned int unsignedInt = 4294967295;
    unsigned long int unsignedLongInt = 4294967295;
    unsigned long long int unsignedLongLongInt = 18446744073709551615;
    unsigned short int unsignedShortInt = 65535;

    printf("The unsigned int value: %u\n", unsignedInt);
    printf("The unsigned long int value: %lu\n", unsignedLongInt);
    printf("The unsigned long long int value: %llu\n", unsignedLongLongInt);
    printf("The unsigned int value: %hu\n\n\n", unsignedShortInt);

    unsignedInt = 0;
    unsignedLongInt = 0;
    unsignedLongLongInt = 0;
    unsignedShortInt = 0;

    printf("The unsigned int value: %u\n", unsignedInt);
    printf("The unsigned long int value: %lu\n", unsignedLongInt);
    printf("The unsigned long long int value: %llu\n", unsignedLongLongInt);
    printf("The unsigned int value: %hu", unsignedShortInt);

    printf("\n");
    return 0;
}
