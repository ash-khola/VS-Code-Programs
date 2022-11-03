#include <stdio.h>

int main()
{
    int num, rev = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    int k = num;
    while (num != 0)
    {
        rev = (10 * rev) + num % 10;
        num = num / 10;
    }

    // printf("Reversed number is: %d.", rev);  //----> To print the reversed number.

    if (rev == k)
        printf("Number is plaindrome.");

    else
    {
        printf("Number is not a plaindrome.");
    }

    return 0;
}