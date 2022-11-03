#include<stdio.h>


int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int count = 0;
    do
    {
        if(n%10>=0)
        {
            count++;
            n = n/10;
        }
    }
    while(n!=0);

    printf("%d",count);
}