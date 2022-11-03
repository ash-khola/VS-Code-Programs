// Roll no. - 12112010

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    char temp;
    int length;

    printf("Enter the string: ");
    gets(str);

    length = strlen(str);

    for (int i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("The reversed string is: ");
    puts(str);

    return 0;
}