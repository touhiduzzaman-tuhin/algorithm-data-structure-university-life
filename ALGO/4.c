#include <stdio.h>

int main()
{
    int n, i, j, t, start, end, mid, temp, ara[100];

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
        for(j = i; j < n; j++)
        {
            if(ara[i] > ara[j])
            {
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        printf("%d\n", ara[i]);
    }

    start = 0;
    end = n - 1;
    mid = (start + end) / 2;

    printf("Enter the search element: \n");

    scanf("%d", &t);

    while(start <= end)
    {
        if(ara[mid] == t)
        {
            printf("Found\n");
            break;
        }

        else if(ara[mid] > t)
        {
            end = mid - 1;
        }

        else if(ara[mid] < t)
        {
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }

    if(start > end)
    {
        printf("Not Found\n");
    }

    return 0;
}

