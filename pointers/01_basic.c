#include<stdio.h>

int main(){
    int i = 909;
    int* j = &i;

    // printf("The address of i is %p\n",&i);
    //  printf("The address of i is %p\n",&i);
    //  printf("The address of i is %p\n",j);0
    // printf("The address of i is %u\n",&i);
    printf("The address of i is %u and %u\n",*j,*(j+1));
    printf("final value of i is = %d", i);
    // * value at address operator
    // printf("The address of i is %u\n",*(&i));
    // printf("The address of i is %u\n",*j);

     return 0;
}