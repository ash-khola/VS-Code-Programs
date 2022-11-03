// Roll no. - 12112010

#include <stdio.h>
int main()
{
    char str[100];
    int count = 0, i = 0;
    printf("Enter the string: ");
    gets(str);

    while (str[i] != '\0')
    {
        count++;
        i++;
    }

    printf("The length of string is %d", count);

    return 0;
}