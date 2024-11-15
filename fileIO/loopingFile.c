#include <stdio.h>

int main()
{
    FILE *ptr;

    // read from a file------
    ptr = fopen("file1.txt", "r");
    char c = fgetc(ptr); // to get char from file
    while (1)
    {
        c = fgetc(ptr);
        if (c == EOF)
        // printf("%c", c);
        {
            printf("\n");
            return 0;
        }
        // printf("%c", c);
    }

    return 0;
}