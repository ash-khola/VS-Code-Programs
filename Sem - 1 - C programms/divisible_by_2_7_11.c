// Roll no. - 12112010

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the nuymber: ");
    scanf("%d", &num);

    switch ((num % 2 == 0) && (num % 7 == 0) && (num % 11 == 0))
    {
    case 1:
        printf("%d is divisible by 2,7 and 11.\n", num);
        break;

    case 0:
        printf("%d id not divisible by 2,7 and 11.\n", num);
    }

    return 0;
}