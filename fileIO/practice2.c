#include <stdio.h>

int main()
{
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("file1.txt", "r");
    ptr2 = fopen("file.txt", "a");
    char ch = fgetc(ptr1);

    // method 1 ---------------------------------

    while (ch != EOF)
    {
        fprintf(ptr2, "%c", ch);
        ch = fgetc(ptr1);
    }

    // method 2 ---------------------------------

    // while (fscanf(ptr1, "%c", &ch) != EOF)
    // {
    //     fprintf(ptr2, "%c", ch);
    // }

    // method 3--------------------------
    // while (1)
    // {
    // if (ch != EOF)
    // {
    //     fprintf(ptr2, "%c", ch);
    //     ch = fgetc(ptr1);
    //     // printf("\n");
    // }
    // else
    // {
    //     return 0;
    // }

    // fputc(ch, ptr2);
    // }

    fclose(ptr1);
    fclose(ptr2);

    return 0;
}