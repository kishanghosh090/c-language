#include<stdio.h>

int trueLength(char *str,char *str2){
    int c = 0;
    while (str[c] != '\0')
    {
        str2[c] = str[c];
        c++;
    }
    str2[c] = '\0';
    printf("%s", str2[0]);
    return c;
}
int main(){
    char *str;
    char *str2;
    gets(str);
    int len = trueLength(str,str2);
    printf("length of your string is = %d",len);
    return 0;
}