// income tax

#include <stdio.h>

int main()
{
    int income;
    int tax;
    printf("Eneter your income \n");
    scanf("%d", &income);
    if (income < 250000)
    {
        tax = 0;
        printf("you don't need any kind of tax\n");
    }
    else if (income > 250000 && income < 500000)
    {
        tax = 0.05 * (income - 250000);
        printf("You 5% tax");
    }
    else if (income > 500000 && income < 1000000)
    {
        tax = 0.05 * (income - 250000);
        printf("You 5% tax");
    }

    return 0;
}