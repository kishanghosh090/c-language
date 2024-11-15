#include <stdio.h>

int main()
{
    FILE *ptr;

    // read from a file------
    // ptr = fopen("file1.txt","r");
    // char c = fgetc(ptr);// to get char from file
    // printf("%c",c);

    // wrtite into a file using fputc------
    ptr = fopen("file1.txt", "w");
    fputc('c', ptr);

    return 0;
}