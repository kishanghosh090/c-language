#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fptr;
    fptr = fopen("file1.txt", "r");
    char ch = fgetc(fptr);
    char *myStr;
    char *tempStr;

    int i = 0;
    int tempForCount = 0;
    int comp = -1;
    printf("Enter your word which you want to know how many times occur in your file: ");
    // gets(myStr);
    scanf("%s", myStr);
    while ((int)ch != -1)
    {
        while (ch != ' ')
        {
            tempStr[i] = ch;
            i++;
            ch = fgetc(fptr);
            if (ch == EOF)
            {
                break;
            }
        }
        tempStr[i] = '\0';
        comp = strcmp(myStr, tempStr);

        if (comp == 0)
        {
            tempForCount++;
        }
        i = 0;
        if (ch != EOF)
        {
            ch = fgetc(fptr);
        }
    }
    printf("%s is occur %d time in your file\n", myStr, tempForCount);
    fclose(fptr);
    return 0;
}