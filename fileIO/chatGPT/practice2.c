#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fptr;
    fptr = fopen("file1.txt", "r");
    char *str;
    char ch = fgetc(fptr);
    int i = 0;
    while ((int)ch != -1)
    {
        while (ch != ' ')
        {
            str[i++] = ch;
            ch = fgetc(fptr);
            if (ch == EOF)
            {
                break;
            }
        }
        for (int j = 0; j < i; j++)
        {
            printf("%c", str[j]);
        }
        printf(": %d \n", i);
        i = 0;
        ch = fgetc(fptr);
    }
    fclose(fptr);
    return 0;
}