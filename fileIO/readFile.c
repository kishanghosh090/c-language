#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("file1.txt","r");
    if (ptr == NULL)
    {
        printf("this file not exists");
    }
    
    // char str;
    // fscanf(ptr,"%c",&str);
    // printf("this is the line %c",str);

    int num;
    fscanf(ptr,"%d",&num);
    printf("%d\n",num);
    fclose(ptr);
    return 0;
}