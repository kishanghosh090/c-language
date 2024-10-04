#include<stdio.h>

int main(){
    int x = 5;
    // x++;
    // printf("b = %d and a = %d \n", b, a);
    printf("x = %d  \n", x++);
    int y = x;
    printf("%d and %d \n",x,y);


    int a = 5;
    int b = ++a;
    printf("a = %d and b = %d \n", a, b);
    printf("%d and %d",a,b);

    return 0;
}