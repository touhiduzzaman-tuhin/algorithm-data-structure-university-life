#include <stdio.h>

int main()
{
    int n, i, j, a, b, temp, start, end, mid, ara[100];

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
        b = 0;

        for(j = 0; j < n - i - 1; j++)
        {
            if(ara[j] > ara[j + 1])
            {
                temp = ara[j];
                ara[j] = ara[j + 1];
                ara[j + 1] = temp;

                b = 1;
            }
        }

        if(b == 0)
           {
               break;
           }
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", ara[i]);
    }

    printf("\n");

    return 0;
}
