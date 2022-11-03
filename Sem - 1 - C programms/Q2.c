#include <stdio.h>
struct Bank
{
    char name[100];
    int AC;
    int bal;
};

int main()
{
    struct Bank customer[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the name\n");
        gets(customer[i].name);
        printf("Enter the account number\n");
        scanf("%d", &customer[i].AC);
        printf("Enter the balance\n");
        scanf("%d", &customer[i].bal);
        if (customer[i].bal > 1000)
        {
            customer[i].bal += 100;
            printf("Incremented balance is %d", customer[i].bal);
        }
    }
    return 0;
}