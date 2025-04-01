#include <stdio.h>

int getPow(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

int binaryToDecimal(int n)
{
    int decimal = 0, i = 0, remainder;
    while (n != 0)
    {
        remainder = n % 10;
        n /= 10;
        decimal += remainder * (getPow(2, i));
        ++i;
    }
    return decimal;
}

int main()
{
    int n;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    int decimal = binaryToDecimal(n);
    printf("Decimal number is: %d", decimal);
    return 0;
}