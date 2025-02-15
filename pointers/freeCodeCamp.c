// #include"./exportFn.c"
#include<stdio.h>

int main(){
    // day 1

    // int a = 5;
    // int *p;
    // p = &a;
    // // printf("%d\n", p);
    // // printf("%d\n", &a);
    // a = 10;
    // *p = 20; // dereferencing
    // // printf("%d\n", *p);
    // // printf("%d\n", a);

    // printf("p%d\n", p);
    // printf("p+1%d\n", p+1);

    // day2---------------------------------------

    // int a = 2;
    // int *p = &a;
    // // printf("%d %d \n", p, *p);

    // char *p0;
    // p0 = (char *)p;
    // // printf("%d %d \n", p0, *p0);

    // // void pointer

    // void *p1;
    // p1 = p;
    // printf("%d %d \n", p1, p1);

    // day3---------------------------------------

    int x = 10;
    int* p = &x;
    *p = 20;

    int** q = &p;
    int*** r = &q;

    return 0;
}