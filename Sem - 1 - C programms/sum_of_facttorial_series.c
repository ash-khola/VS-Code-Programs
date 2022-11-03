#include <stdio.h>
int factorial(int);

int main()
{
    int n;
    int sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += factorial(i);
    }
    printf("The sum of serie is: %d", sum);

    return 0;
}

int factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return (n * factorial((n - 1)));
}