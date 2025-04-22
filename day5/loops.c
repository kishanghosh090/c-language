#include <stdio.h>
int main(){
    int noOfLines;

    printf("Enter the number of lines: ");
    scanf("%d", &noOfLines);

    for (int i = 1; i <= noOfLines; i++)
    {
        for (int j = 0; j < noOfLines-i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}


































// int main()
// {
//     // whilw loop
//     // int i = 0;
//     // while (i <= 20)
//     // {
//     //     printf("hello wrold %d\n", i);
//     //     // i = i + 1;
//     //     i++;
//     // }

//     // do-while loop
//     // int i = 1;

//     // do
//     // {
//     //     printf("%d\n", i);
//     //     i++;
//     // } while (i >= 10);

//     // for loop

//     for (int i = 0; i <= 10; i++)
//     {
//         printf("%d\n", i + 1);
//     }

//     return 0;
// }
