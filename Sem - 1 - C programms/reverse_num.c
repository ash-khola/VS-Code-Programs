#include <stdio.h>

int main()
{
    int num, rev = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        rev = (10 * rev) + num % 10;
        num = num / 10;
    }
    num = rev;

    printf("Reversed number is: %d.", num);

    return 0;
}