#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int roll;
    float marks[5];
    float average;
};

int main()
{
    struct student s;
    float sum = 0;

    printf("Enter the name of the student: ");
    gets(s.name);

    printf("Enter the Roll no. of the student: ");
    scanf("%d", &s.roll);

    printf("Enter the marks of  5 subjects.\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &s.marks[i]);
        sum += s.marks[i];
    }

    s.average = sum / 5;

    printf("The name of the student is: %s\n", s.name);
    printf("The roll no f the student is %f\n", s.roll);
    printf("Marks of  5 subjects are.\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", s.marks[i]);
    }
    printf("The average mark of the student is: %f\n", s.average);

    return 0;
}