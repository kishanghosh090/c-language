#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[100]; 
};


int main(){
    struct employee e1,e2;

    strcpy(e1.name,"kishan rana ghosh");
    e1.salary = 54.56;
    printf("%s is name and salary %f",e1.name,e1.salary);

    return 0;
}