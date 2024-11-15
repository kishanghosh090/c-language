#include<stdio.h>
int main(){
    int a=10;
    int *b=&a;
    int **c=&b;
    printf("%d\n",a);
    printf("%d\n",*b);
    printf("%d\n",**c);
    return 1;
}