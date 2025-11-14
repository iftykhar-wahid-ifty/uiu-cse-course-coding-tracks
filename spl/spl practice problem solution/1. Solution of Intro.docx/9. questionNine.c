#include<stdio.h>
#include<stdbool.h>

int main(){

    double doubleValue = 3.14;
    bool booleanValue = true;

    printf("The double value: %e\n", doubleValue);
    printf("The boolean value: %d\n\n\n", booleanValue);

    doubleValue = 1.618039;
    booleanValue = false;

    printf("The double value: %lf\n", doubleValue);
    printf("The boolean value: %d", booleanValue);

    printf("\n");
    return 0;
}
