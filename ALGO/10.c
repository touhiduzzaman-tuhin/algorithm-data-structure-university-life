#include <stdio.h>

int main()
{
    int n, i, j, a, hole, temp, start, end, mid, ara[100];

    printf("Enter the array size: \n");

    scanf("%d", &n);

    printf("Enter the array element: \n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    printf("Sorted array: \n");

    for(i = 0; i < n; i++)
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
        printf("%d ", ara[i]);
    }

    printf("\n");

    return 0;
}
