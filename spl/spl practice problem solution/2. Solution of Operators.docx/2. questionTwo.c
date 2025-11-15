#include<stdio.h>
#define PI 3.14

int main()
{
    float radius, area;

    printf("Enter the value of radius: ");
    scanf("%f", &radius);

    area = 2 * PI * radius;

    printf("\nArea: %.2f", area);

    printf("\n");
    return 0;
}
