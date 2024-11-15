#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("file.txt","w");
    if (ptr == NULL)
    {
        printf("this file not exists");
    }
    int num;
    for (int i = 0; i <= 100; i++)
    {
        // printf("enter your number: ");
        // scanf("%d",&num);
        fprintf(ptr," %d",i);
    }
    
    fclose(ptr);
    
    return 0;
}