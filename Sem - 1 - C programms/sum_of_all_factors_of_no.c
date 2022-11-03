#include <stdio.h>

int divSum(int n)
{
    if (n == 1)
        return 1;

    int result = 0;

    for (int i = 1; i <= n; i++)
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
    int n = 30;
    printf("%d", divSum(n));
    return 0;
}