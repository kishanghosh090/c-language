#include <stdio.h>

struct userDetails
{
    char userName[50];
    char password[50];
};

int main()
{
    int n;

    printf("Enter the number of users: ");
    scanf("%d", &n);
    struct userDetails userDetails[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the username of user %d: ", i + 1);
        scanf("%s", userDetails[i].userName);
        printf("Enter the password of user %d: ", i + 1);
        scanf("%s", userDetails[i].password);
    }
    // for make json file with user details
    FILE *fptr;
    fptr = fopen("file.json", "w");

    for (int i = 0; i < 1; i++)
    {
        if (i == 0 && n > 1)
        {
            fprintf(fptr, "[\n");
        }
        if (n > 1)
        {
            for (int j = 0; j < n; j++)
            {
                fprintf(fptr, "  {\n");
                fprintf(fptr, "    \"userName\": \"%s\",\n", userDetails[j].userName);
                fprintf(fptr, "    \"password\": \"%s\"\n", userDetails[j].password);
                if (j == n - 1)
                {
                    fprintf(fptr, "  }\n");
                    fprintf(fptr, "]");
                }
                else
                {
                    fprintf(fptr, "  },\n");
                }
            }
        }
        else
        {
            fprintf(fptr, "{\n");
            fprintf(fptr, "\"userName\": \"%s\",\n", userDetails[i].userName);
            fprintf(fptr, "\"password\": \"%s\"\n}", userDetails[i].password);
        }
    }
    printf("making json file is done...\n");
    fclose(fptr);

    return 0;
}