// #include <stdio.h>
// int factorial(int);
// int factorial(int a)
// {
//     if (a == 1 || a == 0)
//     {
//         return 1;
//     }
//         return factorial(a - 1) * a;
// }

// int main()
// {
//     int n = 4;
//     printf("the factorial of %d is %d", n, factorial(n));
//     return 0;
// }

#include <stdio.h>
void printHlw(int count);

int main()
{
    printHlw(10);
    return 0;
}

void printHlw(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("hello world %d\n", count);
    printHlw(count - 1);
}
