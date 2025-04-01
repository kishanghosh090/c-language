#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("file1.txt", "r");
    if (ptr == NULL)
    {
        printf("this file not exists");
    }

    // char str;
    // fscanf(ptr,"%c",&str);
    // printf("this is the line %c",str);

    int num;
    do
    {
        fscanf(ptr, "%d", &num);
        printf("%d\n", num);
    } while (fscanf(ptr, "%d", &num) != EOF);

    fclose(ptr);
    return 0;
}