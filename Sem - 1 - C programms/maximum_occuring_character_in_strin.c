#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    char max_character;
    int count, max = 0;
    printf("Enter the string; ");
    gets(str);

    for (int i = 0; i < strlen(str); i++)
    {
        count = 1;

        for (int j = i + 1; j < strlen(str); j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if (max < count)
        {
            max = count;
            max_character = str[i];
        }
    }

    printf("The maximum occuring character is %c and its frequency of occurance is %d.", max_character, max);
    return 0;
}


