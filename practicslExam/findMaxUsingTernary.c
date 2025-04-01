// find max element using ternary operator

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Largest number is %d", max);
    return 0;
}