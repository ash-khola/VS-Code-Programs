// Roll no. - 12112010

// #include <stdio.h>
// int main()
// {
//     int n, fact;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     fact = n;
//     for (int i = n; i >= 1; i--)
//     {
//         if (i == 1)
//         {
//             fact = fact * 1;
//         }
//         else
//             fact = fact * (i - 1);
//     }
//     printf("%d", fact);

//     return 0;
// }

#include <stdio.h>
long factorial(long);
int main()
{
    long int n, fact;
    printf("Enter the number: ");
    scanf("%Ld", &n);
    if (n / 10 >= 1 && n / 10 < 10)
    {
        fact = factorial(n);
        printf("%Ld", fact);
    }

    return 0;
}

long factorial(long n)
{
    if (n == 1)
        return 1;
    else
        return (n * factorial((n - 1)));
}