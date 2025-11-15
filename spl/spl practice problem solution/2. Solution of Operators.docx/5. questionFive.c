#include<stdio.h>

int main()
{
    int x, y, temp;

    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    temp = x;
    temp += y;
    printf("\nIncremented Value: %d\n", temp);

    temp = x;
    temp -= y;
    printf("Decremented Value: %d", temp);

    printf("\n");
    return 0;
}
