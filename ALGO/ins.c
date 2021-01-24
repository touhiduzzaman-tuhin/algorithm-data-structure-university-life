#include <stdio.h>

int main()
{
    int n, i, j, temp, hole, ara[100];

    printf("Enter array size: \n");

    scanf("%d", &n);

    printf("Enter array element: \n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for(i = 1; i < n; i++)
    {
        temp = ara[i];
        hole = i;

        while(hole > 0 && ara[hole - 1] > temp)
        {
            ara[hole] = ara[hole - 1];
            hole = hole - 1;
        }

        ara[hole] = temp;
    }

    for(i = 0; i < n; i++)
    {
        printf("%d\n", ara[i]);
    }

    return 0;
}
