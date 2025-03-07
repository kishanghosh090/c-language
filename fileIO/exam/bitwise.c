#include<stdio.h>

int main(){

    int kishan = 66;

    char ch = (char)kishan;
    printf("%c\n", ch);

    int a = 5;
    int b = 6;

    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);
    return 0;
}