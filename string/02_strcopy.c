#include<stdio.h>

void trueLength(char *str, char *str2){
    int c = 0;

    while (*str != '\0')
    {
        str2[c] = str[c];
        *str++;
    printf("copy string is = %s",str2[0]);
    }
    str2[c] = '\0';
}
int main(){
    char *str;
    char *str2;
    printf("enter a string:");
    gets(str);
    trueLength(str,str2);
    
    return 0;
}