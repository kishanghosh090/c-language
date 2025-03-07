#include<stdio.h>
#include<string.h>

typedef struct stuentOfGourMahaVidyalaya{
    int roll;
    char name[20];
    float cgpa;
} s;

// function ---> call by value

// argument , parameter

int sum(int a, int b){ // argument
    int c = a + b;
    return c;
}

int main(){

    s s1;// s1 --->

    s1.roll = 1;
    s1.cgpa = 3.5;
    strcpy(s1.name, "kishan");
    // sum(2, 3); //2, 3 ---> parameter
    strlen(s1.name);

    printf("%d,%s,%f", s1.roll, s1.name, s1.cgpa);
    



    return 0;
}