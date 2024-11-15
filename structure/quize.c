#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[100]; 
};


int main(){
    struct employee e1,e2;
    printf("Enter your salary: \n");
    scanf("%f",&e1.salary);
    printf("Enter your name: \n");
    gets(e1.name);
    printf("%s is name and salary %f",e1.name,e1.salary);

    return 0;
}