#include <stdio.h>

int main()
{
    int i, j, n;
    char m;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n-i; j++)
        {
            printf("  ");
        }

        m = '*';

        for(j = 1; j <= i; j++)
        {
            printf("%4c", m);
        }


        printf("\n");
    }

    return 0;
}
