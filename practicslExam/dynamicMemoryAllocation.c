#include <stdio.h>
#include <stdlib.h>
// malloc -> memory allocation(it takes the number of bytes to be allocated & returns a pointer of void type)
// calloc -> memory allocation and initialization to 0()
// realloc -> reallocation of memory
// free -> deallocate memory
int main()
{
    // malloc -> memory allocation(it takes the number of bytes to be allocated & returns a pointer of void type)
    // int *ptr;
    // ptr = (int *)malloc(5 * sizeof(int)); // 5*4 = 20 bytes
    // ptr[0] = 10;
    // ptr[1] = 20;
    // ptr[2] = 30;
    // ptr[3] = 40;
    // ptr[4] = 50;
    // for (int i = 0; i < 5; i++)
    // {
    // printf("The value of %d element is %d\n", i, ptr[i]);
    // }

    // calloc -> memory allocation and initialization to 0()
    int *ptr;

    ptr = (int *)calloc(5, sizeof(int)); // 5*4 = 20 bytes
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    ptr[4] = 50;
    ptr[5] = 60;
    // for (int i = 0; i < 5; i++)
    // {
    // printf("The value of %d element is %d\n", i, ptr[i]);
    // }

    // realloc -> reallocation of memory

    ptr = realloc(ptr, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d element is %d\n", i, ptr[i]);
    }

    return 0;
}