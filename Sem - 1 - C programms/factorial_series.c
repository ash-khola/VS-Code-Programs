#include <stdio.h>

// int factrial(int n)
// {
//     int fact;
//     if(n==1)
//     {
//         return 1;
//     }
//     else
//     {
//         fact = n*factorial(n-1);
//         return fact;
//     }
// }

int main()
{
    int num, fact = 1, sum = 0;
    printf("Enter the last number of series:\n");
    scanf("%d", &num);

    // for(i=1;i<=num;i++)
    // {
    // 	sum = sum+factorial(i);
    // }

    for (int i = 1; i <= num; i++)
    {
        fact *= (i);
        sum += fact;
    }

    printf("%d", sum);

    return 0;
}
