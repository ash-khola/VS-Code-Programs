#include <stdio.h>

int divSum(int n)
{
    if (n == 1)
        return 1;

    int result = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            result += i;
        }
    }
    return (result);
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (divSum(n) == n)
        printf("It is a perfect number");

    return 0;
}
