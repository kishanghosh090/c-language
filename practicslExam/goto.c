// #include <stdio.h>

// int main(){
//     label:
//         printf("we are inside the label\n");
//         goto end;

//     printf("Hello chai\n");
//     goto label;
//     end:
//         printf("End of the program\n");

// return 0;
// // }

// #include <stdio.h>

// int main()
// {
//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             printf("Enter the Number || Enter 0 to exit\n");
//             int num;
//             scanf("%d", &num);
//             if (num == 0)
//             {
//                 goto end;
//             }
//         }
//     }
// end:
//     printf("End of the program\n");

//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
// #include <time.h>

int main()
{
    // Seed the random number generator with the current time
    // srand(time(NULL));

    // Generate a random integer between 0 and 100
    
    int random_value = rand() % 10;

    printf("Random value: %d\n", random_value);

    return 0;
}