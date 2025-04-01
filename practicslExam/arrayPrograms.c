#include <stdio.h>

int findTheNumber(int arr[], int key, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            printf("Your No %d is find at index %d\n", key, i);
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    printf("Enter How Many Number You Want:-> ");
    scanf("%d", &n);
    int arr[n];

    printf("Create Your Own ARRAY...\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d no value of your ARRAY: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int num;
    printf("Enter The Number Which You Want to Find:-> ");
    scanf("%d", &num);

    int isFind = findTheNumber(arr, num, n);

    if (isFind)
    {
        printf("Wooo !! Your Key Found Successfully.");
    }
    else if (isFind == 0)
    {
        printf("ohoo nooo !! We Faild to find your key");
    }

    return 0;
}