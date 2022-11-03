#include <stdio.h>

int main()
{

    int n, reverse = 0, remainder, flag = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        while (n != 0)
        {
            remainder = n % 10;
            reverse = reverse * 10 + remainder;
            n /= 10;
        }
        printf("Reversed number = %d.", reverse);
    }

    else if (flag == 1)
        printf("The number is not prime.\n");

    return 0;
}