#include<stdio.h>

int main(){
    char str[100] = "hello";
    char *ptr = &str;
    printf("the value is %c\n",*ptr+1);
  
    return 0;
}