#include <stdio.h>
#include <math.h>

int main()
{
    int num, sum = 0, n = 1;
    printf("\nEnter any positive integer: ");
    scanf("%d", &num);
    while (n <= num)
    {
        sum = sum + pow(n, n - 1);
        n++;
    }

    printf("The sum of the series is: %d", sum);

    return 0;
}
