#include<stdio.h>
int main(){
    int a,b,c,l1;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    l1 = a < b ? a : b;
    l1 = l1 < c ? l1 :c;
    printf("%d is smaller number",l1); 

    return 0;
}