// Roll no. - 12112010

#include <stdio.h>
int main()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0, i;
    printf("Enter the n value: ");
    scanf("%d", &n);

    if (n == 0 || n == 1)
        printf("%d", n);
    else
        nextTerm = t1 + t2;

    for (i = 3; i <= n; ++i)
    {
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    printf("%d",nextTerm);

    return 0;
}

// {

//     int n, curr = 1, prev = 1, next;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         if (i == 1 || i == 2)
//         {
//             printf("%d ", curr);
//             if (i == 2)
//                 curr++;
//         }
//         else
//         {
//             printf("%d ", curr);
//             next = curr + prev;
//             prev = curr;
//             curr = next;
//         }
//     }
//     return 0;
// }