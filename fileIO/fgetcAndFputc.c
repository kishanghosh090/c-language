#include <stdio.h>

int main()
{
    FILE *ptr;
    // ptr = fopen("file1.txt", "r");
    ptr = fopen("file1.txt", "w");

    // read from a file--------------------------------
    // char c = fgetc(ptr);
    // while ((int)c != -1)
    // {
    //     printf("%c", c);
    //     c = fgetc(ptr); // to get char from file
    // }

    // wrtite into a file using fputc------------------

    // fputc('c', ptr);

    char *c;

    printf("Enter a string: ");
    gets(c);
    // printf("%d", sizeof(c));
    for (int i = 0; i < sizeof(c) - 1; i++)
    {
        fputc(c[i], ptr);
    }

    return 0;
}