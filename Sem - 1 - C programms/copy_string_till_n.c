// Roll no. - 12112010

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    int i = 0, n = 0;
    printf("Enter the string: ");
    gets(s1);
    printf("Enter n: ");
    scanf("%d", &n);

    while (i < n && i < strlen(s1))
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';

    printf("Copied String is: %s ", s2);
    return (0);
}