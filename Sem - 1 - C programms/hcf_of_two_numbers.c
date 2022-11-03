#include <stdio.h>

int main()
{
    int num1, num2, min, i;
    printf("Enter any number:\n");
    scanf("%d", &num1);
    printf("Enter any number:\n");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        min = num2;
    }
    else
    {
        min = num1;
    }

    for (i = min; i > 0; --i)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            printf("The hcf of %d and %d is %d", num1, num2, i);
            break;
        }
    }
    return 0;
}