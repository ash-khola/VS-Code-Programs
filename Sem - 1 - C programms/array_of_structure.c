#include <stdio.h>
// #include <string.h>

struct student
{
    char name[20];
    int roll;
    float marks[5];
    float average;
};

int main()
{
    struct student s[50];
    float sum = 0;
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        printf("Enterd details of student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", &s[i].name);
        for (int j = 0; j < 5; j++)
        {
            printf("Marks in subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
            sum += s[i].marks[j];
        }
        s[i].average = sum / 5;
    }

    printf("Name of students having average greater than 90 are:\n");
    for (int i = 0; i < n; i++)
    {
        if (s[i].average > 90)
        {
            printf("%s ", s[i].name);
            printf("%f\n", s[i].average);
        }
    }

    return 0;
}