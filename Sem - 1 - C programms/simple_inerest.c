#include <stdio.h>
#include<math.h>

int main()
{
    float si, rate, principal;
    int yrs;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the interset rate: ");
    scanf("%f", &rate);
    printf("Enter the time period: ");
    scanf("%d", &yrs);
    si = (principal * rate * yrs) / 100;

    printf("Simple interest is: %f", si);

    return 0;
}