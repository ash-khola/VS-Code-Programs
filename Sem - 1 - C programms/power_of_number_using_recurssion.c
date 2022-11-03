#include <stdio.h>
int power(int a, int b);
int main()
{
    int a,b;
    printf("Enter base number: ");
    scanf("%d", &a);
    printf("Enter power number: ");
    scanf("%d", &b);
    int result = power(a,b);
    printf("%d raise to power %d is equal to %d.",a,b,result);
}
int power (int a, int b)
{
    if(b==0)
    {
        return 1;
    }
    else
    {
        a = a*power(a,(b-1));
        return a;
    }
}