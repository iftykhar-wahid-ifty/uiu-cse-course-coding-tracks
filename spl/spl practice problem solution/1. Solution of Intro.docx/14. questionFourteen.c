#include<stdio.h>

int num = 10;
int globalNum = 10;

int main()
{
    printf("A. Global: %d\n", num);

    int num = 20;
    printf("B. Local: %d\n", num);

    /*
        printf("C. Global: %d\n", ::num);
            - C does NOT support :: like C++

        So did like the below code for now
    */

    printf("C. Global: %d", globalNum);

    printf("\n");
    return 0;
}
