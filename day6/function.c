#include <stdio.h>

int sum(int x, int y);

int sum(int x, int y)
{
    // printf("The sum is = %d\n", x + y);
    return x + y;
}

int main()
{
    // function prototype
    int a = sum(1, 3);
    printf("the sum is = %d", a);

    return 0;
}