#include <stdio.h>

int main()
{
    int n, a, start, end, mid, temp, j, i, ara[100];

    printf("Enter the array size: \n");

    scanf("%d", &n);

    printf("Enter the array element: \n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(ara[i] > ara[j])
            {
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
    }

    printf("Ascending order: \n");

    for(i = 0; i < n; i++)
    {
        printf("%d\n", ara[i]);
    }

    printf("Enter the search element: \n");

    scanf("%d", &a);

    start = 0;
    end = n - 1;
    mid = (start + end) / 2;

    while(start <= end)
    {
        if(ara[mid] == a)
        {
            printf("Found the element at %d position.\n", mid+1);
            break;
        }

        else if(ara[mid] > a)
        {
            end = mid - 1;
        }

        else if(ara[mid < a])
        {
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }

    if(start > end)
    {
        printf("This element not found\n");
    }

    return 0;
}
