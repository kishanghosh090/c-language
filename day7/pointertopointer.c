#include<stdio.h>
int main(){
    float price = 100.45;
    float *ptr = &price;
    float **pptr = &ptr;
    
    return 0;
}