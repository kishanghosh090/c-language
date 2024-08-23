#include <stdio.h>

int sum(int x, int y);

int sum(int x, int y)
{
    printf("The sum is = %d\n", x + y);
}

int main()
{
    // function prototype
    sum(1,3);

    return 0;
}