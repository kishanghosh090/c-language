// 1. auto --> default value of a variable is garbage(local variable)
// 4. extern --> default value of a variable is 0(global variable)
// 3. static --> default value of a variable is 0(local variable)
// 2. register --> default value of a variable is garbage(local variable)

// Auto storage class--------------------------------------------------------
// #include <stdio.h>

// int sum()
// {
// auto int a = 10;
// printf("The value of a is %d\n", a);
// }
// int main()
// {
//     return 0;
// }

// Extern storage class----------------------------------------
// #include <stdio.h>

// #include "kishan.c"

// extern int a = 1320; // global variable
// int a = 1212;
// int add1()
// {
// a = 11;
// }
// int main()
// {
// a = 10;
// printf("The value of a is %d\n", a);
// add1();
// printf("The value of a is %d\n", a);
// return 0;
// }

// static storage class-------------------------------------------------------
#include <stdio.h>

void myFunction()
{
    static int a = 10;
    printf("The value of a is %d\n", a);
    a++;
}
int main()
{
    myFunction();
    myFunction();
    myFunction();

    return 0;
}

// register storage class--------------------------------------------------------
// #include <stdio.h>

// int main()
// {
//     return 0;
// }