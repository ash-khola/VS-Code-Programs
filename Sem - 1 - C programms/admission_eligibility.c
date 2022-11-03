#include<stdio.h>

int main()
{
    int p,c,m;
    printf("Enter marks of physics chemistry and maths.\n");
    scanf("%d%d%d",&p,&c,&m);
    if(p>=55 && c>=50 && m>=65)
    {
        if((p+c+m)>=190 || (m+p)>=140)
        {
            printf("You are eligible.");
        }
    }
    else
    {
        printf("You are not eligible.");
    }
    return 0;
}