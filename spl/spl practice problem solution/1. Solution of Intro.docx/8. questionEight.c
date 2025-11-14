#include<stdio.h>

int main(){

    int firstNum, lastNum;

    printf("Enter 3 int values: ");
    scanf("%d %*d %d", &firstNum, &lastNum);

    printf("First value = %d, Last value = %d", firstNum, lastNum);

    return 0;
}
