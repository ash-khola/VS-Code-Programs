#include<stdio.h>

int main()
{
    int x ;
    float cls, frh ;
    printf("Enter 1 to convert celsius to fahrenheit and 2 for vice versa: ") ;
    scanf("%d",&x);
    if( x == 1)
    {

        printf("Enter temperature in celsius: ");
        scanf("%f", &cls);
        frh = ((9/5)*cls) + 32 ;
        printf("Temperature in fahrenheit is: %0.2f", frh); 
    }
    else if(x == 2)
    {
        printf("Enter temperature in fahrenheit: ");
        scanf("%f", &frh);
        cls = (5/9)*(frh - 32) ;
        printf("Temperature in celsius is: %0.2f", cls);   
    }
    else
    {
        printf("Invalid input.\n");
    }
    
    return 0;
}