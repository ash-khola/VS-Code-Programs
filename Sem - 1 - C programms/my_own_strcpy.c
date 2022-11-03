// Roll no. - 12112010

#include <stdio.h>

int main()
{
    char s1[100], s2[100], i;
    printf("Enter two strings:\n");
    gets(s1);
    gets(s2);

    for (i = 0; i < strlen(s2); ++i)
    {
        s1[i] = s2[i];
    }

    s2[i] = '\0';

    printf("String s1 is: %s\n", s1);
    printf("String s2: %s", s2);

    return 0;
}
