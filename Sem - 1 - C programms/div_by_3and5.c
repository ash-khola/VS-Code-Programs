#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num%3==0 && num%5 == 0)
    {
        printf("Number is divisible by both 3 and 5.");
    }
    else
    {
        printf("Number is not divisible by either of 3 or 5 or both.");
    }
    
    return 0;
}