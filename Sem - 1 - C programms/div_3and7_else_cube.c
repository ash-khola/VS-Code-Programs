// #include<stdio.h>
// #include <math.h>
// int main()
// {
//     int num;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     if(num%3==0 && num%7 == 0)
//     {
//         printf("Number is divisible by both 3 and 7.");
//     }
//     else
//     {
//         int z = pow(num,3);
//         printf("%d",z);
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    double n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 >= n2)
    {
        if (n1 >= n3)
            printf("%.2lf is the largest number.", n1);
        else
            printf("%.2lf is the largest number.", n3);
    }
    else
    {
        if (n2 >= n3)
            printf("%.2lf is the largest number.", n2);
        else
            printf("%.2lf is the largest number.", n3);
    }

    return 0;
}