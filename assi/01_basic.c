// #include<stdio.h>

// int main(){
// //     int a = 5;
// //     int b = 10;
// //     int temp = a;
// //     a = b;
// //     b = temp;
//     // printf("a = %d and b = %d \n", a, b);

//     int num = 23434;
//     int temp = 1;
//     int sum = 0;

//     while (num > 0)
//     {
//         int rem = num % 10;
//         num = num / 10;

//         if(temp == 1 || temp == 5){
//             sum = sum + rem;
//         }
//         temp++;
//     }
//     printf("Sum = %d \n", sum);

//     return 0;
// }



#include<stdio.h>

int main(){

    int noOfLines;
    printf("Enter the number of lines: ");
    scanf("%d", &noOfLines);

    for (int i = 1; i <= noOfLines; i++)
    {
       for (int j = 1; j <= noOfLines - i ; j++)
       {
        printf(" ");    
       }

       for (int k = 1; k <= i; k++)
       {
        printf(" *");
       }

       printf("\n");
    }

    return 0;
}