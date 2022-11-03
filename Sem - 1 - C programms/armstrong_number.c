// Programm is giving correct output for all numbers except 153.
#include <stdio.h>
#include <math.h>

int main()
{
    int num, sum = 0, count = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    int k = num;

    while (k != 0)
    {
        k /= 10;
        count++;
    }
    k = num;

    while (k != 0)
    {
        sum = sum + pow((k % 10), count);
        k /= 10;
    }

    if (sum == num)
        printf("The number is an armstrong number.");

    else
        printf("The number is not an armstrong number.");

    return 0;
}