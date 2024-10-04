#include<stdio.h>
// void sum(int a, int y);
// void sum(int a, int y){
//     printf("sum is = %d", a + y);
// }
int sum(int a, int y);
int sum(int a, int y){
    return a + y;
}


int main(){
    
    int a = sum(33, 22);
    printf("sum is = %d",a);
    return 0;
}