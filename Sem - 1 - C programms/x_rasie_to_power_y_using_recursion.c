#include <stdio.h>
#include <math.h>

int power(int, int);

int main()
{
    int x, y, ans;
    printf("Enter the base: ");
    scanf("%d", &x);
    printf("Enter the power: ");
    scanf("%d", &y);
    ans = power(x, y);
    printf("The value of %d^%d is %d", x, y, ans);
    return 0;
}

int power(int x, int y)
{
    if (y != 0)
        return (x * power(x, y - 1));
    else
        return 1;
}
