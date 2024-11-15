#include <stdio.h>
// #include "../string/02_strcopy.c"
int main()
{
    FILE *fptr;
    fptr = fopen("file1.txt", "r");
    char c = fgetc(fptr);
    while (1)
    {
        c = fgetc(fptr);
        if (c == EOF)
        {
            printf("\n");
            return 0;
        }
        printf("%c",c);
    }

    return 0;
}