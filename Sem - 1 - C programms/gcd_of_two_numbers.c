// Roll no. - 12112010

#include <stdio.h>
int main()
{
    int num1, num2, gcd;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 <= num2)
    {
        gcd = num1;
    }
    else
    {
        gcd = num2;
    }

    while (1)
    {
        if ((num1 % gcd == 0) && (num2 % gcd == 0))
        {
            break;
        }
        else
        {
            gcd--;
        }
    }

    printf("The GCD of %d and %d is %d.\n", num1, num2, gcd);

    return 0;
}