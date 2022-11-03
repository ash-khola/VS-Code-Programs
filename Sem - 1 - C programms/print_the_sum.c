#include <stdio.h>

int main()
{
    int num,sum = 0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i = 1; i<=num; i++)
    {
        if(i%2 != 0)
        {
            sum = sum+i;
        }
        else
        {
            sum = sum-i;
        }
    }

    printf("The sum of series is: %d",sum);
     
    return 0;
}