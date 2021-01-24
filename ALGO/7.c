#include <stdio.h>

int main()
{
    int n, i, count, b, a, ara[200];

    printf("Enter the how many coins: \n");

    scanf("%d", &n);

    printf("Enter the coins: \n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    printf("Enter the coin size: \n");

    scanf("%d", &a);

    for(i = 0; i < n; i++)
    {
        b = a / ara[i];
        a = a % ara[i];

        if(b > 0)
        {
            printf("%d coin %d\n", ara[i], b);
        }

        count = count + b;
    }

    printf("%d total coin\n", count);

    return 0;
}
