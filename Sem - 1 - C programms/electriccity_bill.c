#include <stdio.h>

int main()
{
    int unit;
    float bill;
    printf("Enter units used: ");
    scanf("%d", &unit);

    if (unit < 199)
        bill = unit * 1.20;

    else if (unit >= 200 && unit < 400)
        bill = unit * 1.5;

    else if (unit >= 400 && unit < 600)
        bill = unit * 1.8;

    else
        bill = unit * 2;

    if (bill > 400)
    {
        bill += 200;
    }
    else if (bill < 100)
    {
        bill = 100;
    }

    printf("Your bill is: Rs%f.", bill);

    return 0;
}