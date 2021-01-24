#include <stdio.h>

int main()
{
    int ara[1000], i, j, n, temp;

    printf("Enter the array size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(ara[j] > ara[j + 1])
            {
                temp = ara[j];
                ara[j] = ara[j + 1];
                ara[j + 1] = temp;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        printf("%d\n", ara[i]);
    }

    return 0;
}
