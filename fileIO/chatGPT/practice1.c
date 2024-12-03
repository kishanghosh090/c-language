#include <stdio.h>

int main()
{
    FILE *fptrR;
    FILE *fptrW;
    char *str;
    int i = -1;
    fptrR = fopen("file1.txt", "r");
    fptrW = fopen("file2.txt", "w");
    char ch = fgetc(fptrR);
    while ((int)ch != -1)
    {
        str[++i] = ch;
        ch = fgetc(fptrR);
    }
    while (i != -1)
    {
        fputc(str[i--], fptrW);
    }
    fclose(fptrR);
    fclose(fptrW);
    return 0;
}