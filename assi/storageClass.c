// #include<stdio.h>

// int a = 10; // Global variable

// int main(){
//     // int a = 20; // Local variable
//     for (int i = 0; i < 5; i++)
//     {
//         static int b = 10; // Static variable
//         // printf("The value of a is %d\n", a);
//         printf("The value of b is %d\n", b);
//         b++;
//     }
    
//     return 0;
// }



// #include<stdio.h>

// extern int sum = 10;

// int func1(int a, int b){
//     return sum;
// }

// int main(){
  
//     printf("The value of sum is %d\n", func1(2, 3));
//     return 0;
// }


// static variable usees the same memory location for all the function calls

#include<stdio.h>



int func1(int a, int b){
    static int sum = 10;
    return sum++;
}

int main(){
  
    printf("The value of sum is %d\n", func1(2, 3));
      
    printf("The value of sum is %d\n", func1(2, 3));
      
    printf("The value of sum is %d\n", func1(2, 3));
    return 0;
}
