#include<stdio.h>

int sum(int a, int b){
    return a + b;
}


extern int sum(int a, int b);


