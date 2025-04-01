#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    // char name;
    int roll;
    float marks;
};

int main()
{
    int numberOfStudent;
    printf("Enter the number of student: ");
    scanf("%d", &numberOfStudent);
    struct student s[numberOfStudent];
    for (int i = 0; i < numberOfStudent; i++)
    {
        printf("Enter the name of student %d: ", i + 1);
        getchar();
        gets(s[i].name);
        printf("Enter the roll of student %d: ", i + 1);
        scanf("%d", &s[i].roll);
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%f", &s[i].marks);
    }

    // max marks student details
    float maxMarks = 0;
    char maxMarksName[20];
    int maxMarksRoll = 0;

    for (int i = 0; i < numberOfStudent; i++)
    {
        if (s[i].marks > maxMarks)
        {
            maxMarks = s[i].marks;
            strcpy(maxMarksName, s[i].name);
            maxMarksRoll = s[i].roll;
        }
    }

    printf("Max marks student name: %s\n", maxMarksName);
    printf("Max marks student roll: %d\n", maxMarksRoll);
    printf("Max marks student marks: %f\n", maxMarks);
}