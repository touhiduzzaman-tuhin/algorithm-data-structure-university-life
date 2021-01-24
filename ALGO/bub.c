#include <stdio.h>

int main()
{
    int i, n, j, temp, ara[100];

    printf("Enter the array size: \n");

    scanf("%d", &n);

    printf("Enter the array element: \n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for(i = 1; i < n - 1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(ara[i] > ara[i+1])
            {
                temp = ara[i];
                ara[i] = ara[i+1];
                ara[i+1] = temp;
            }

        }
    }

    for(i = 0; i < n; i++)
    {
        printf("%d\n", ara[i]);
    }

    return 0;
}
