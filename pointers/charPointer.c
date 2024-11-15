#include<stdio.h>
void truStrCpy(char *str1, char *str2){
    char *ptr1 = str1;
    char *ptr2 = str2;
    // printf("%c\n",ptr2[5]);
    int c = 0;
    while (*ptr2 != '\0')
    {
        // printf("%c",ptr2);
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }
    printf("\n");
}
int main(){
    char *str;
    char *destination;
    printf("enter your name for copy:- ");
    gets(str);
    truStrCpy(destination,str);
    printf("this is copied string %s\n",destination);
    // printf("the address are %u and %u\n",ptr,str);
    return 0;
}
   
   
   
   