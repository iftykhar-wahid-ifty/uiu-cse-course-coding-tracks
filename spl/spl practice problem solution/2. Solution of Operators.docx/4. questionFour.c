#include<stdio.h>

int main()
{
    int number;

    printf("Enter a value: ");
    scanf("%d", &number);

    int temp = number;
    printf("X++: %d\n", temp++);
    temp = number;
    printf("++X: %d\n", ++temp);
    temp = number;
    printf("X--: %d\n", temp--);
    temp = number;
    printf("--X: %d", --temp);

    printf("\n");
    return 0;
}
