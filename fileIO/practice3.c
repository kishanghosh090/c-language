#include <stdio.h>

int main()
{
    FILE *fptr;
    int temp1 = 0;
    int temp2 = 0;
    fptr = fopen("file1.txt", "r");
    char ch = fgetc(fptr);
    char ch2;
    while ((int)ch != -1)
    {
        if (ch == ' ')
        {
            if (ch2 != ch)
            {
                temp1++;
            }
        }
        if (ch == '.')
        {
            temp2++;
        }
        ch2 = ch;

        ch = fgetc(fptr);
    }
    printf("the total no of sectence in your file is = %d %d\n", temp1 + temp2,ch);
}