#include<stdio.h>


struct employee{
    int code;
    float salary;
    char name[100]; 
};
int main(){

    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[1].code = 200;
    facebook[2].salary = 12.212;


    for (int i = 0; i < 99; i++)
    {
        printf("code count is = %d \n",facebook[i].code);
    }
    


    return 0;
}