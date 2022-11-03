// Roll no. - 12112010

#include <stdio.h>
#include <string.h>

int main()
{
    char Str1[100], Str2[100];
    int result, i;

    printf("Enter the First String : ");
    gets(Str1);

    printf("Enter the Second String : ");
    gets(Str2);

    if (strlen(Str1) != strlen(Str2))
        printf("Both the strings arem not equal.\n");

    else
    {
        for (i = 0; i < strlen(Str1); i++)
        {
            if (Str1[i] != Str2[i])
            {
                printf("Both the strings are not equal.");
                break;
            }
        }
    }

    if (i == strlen(Str1))
        printf("Both the strings are equal.");

    return 0;
}