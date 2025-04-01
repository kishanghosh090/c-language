#include <stdio.h>

union student
{
    char name[20];
    int roll;
    float marks;
};

int main()
{
    union student s1;
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Name: %s\n", s1.name);
    printf("Enter roll: ");
    scanf("%d", &s1.roll);
    printf("Roll: %d\n", s1.roll);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);
    printf("Marks: %f\n", s1.marks);
    return 0;
}