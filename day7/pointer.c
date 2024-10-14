#include <stdio.h>
int main()
{
    int age = 100;
    int *ptr = &age;
    int **ptrr = &ptr;
    int _age = *ptr;
    // printf("%d and %d ", &(_age), *ptr);
    // printf("%d", &i);
    printf("%u  \n", &age);
    printf("%u \n", ptr);
    // printf("%u \n", *ptr)  ; // * value at address ptr
    // printf("%u \n", &ptr); // addresss of ptr
    // printf("%u", ptrr);    // address of ptr (pointer to pointer )
    // printf("break\n");

    // printf("%d \n", &age);
    // printf("%d \n", *ptr);
    // printf("%d \n", *(&age));
    return 0;
}

// double i = 74444444443;
// printf("%ld",sizeof(i));
