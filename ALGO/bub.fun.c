#include <stdio.h>

int main()
{
    int n, i, ara[1000];

    printf("Enter the array size: \n");

    scanf("%d", &n);

    printf("Enter the array element: \n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    printf("Ascending order: \n");

    bubblesort(ara, n);

    for(i = 0; i < n; i++)
    {
        printf("%d\n ", ara[i]);
    }

    return 0;
}

void bubblesort(int ara[], int n)
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i -1; j++)
        {
            if(ara[j] > ara[j + 1])
            {
                temp = ara[j];
                ara[j] = ara[j + 1];
                ara[j + 1] = temp;
            }
        }
    }
}
