#include <stdio.h>

// int and int --- int
// int and float -- float
// float and float -- float

int main()
{
    int a = 9;
    int b = 4;
    float c = a / b;
    int d = 9.4;
    printf("the value of d is = %d\n", d);
    printf("the value of a/b is %f", c);
    return 0;
}