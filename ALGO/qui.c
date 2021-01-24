#include <stdio.h>

int partion(int ara[], int began, int end)
{
    int last = ara[end];
    int j = began;
    int i = began - 1;

    int temp;

    for(j = began; j < end; j++)
    {
        if(ara[j] <= last)
        {
            i++;
            temp = ara[i];
            ara[i] = ara[j];
            ara[j] = temp;
        }
    }
    temp = ara[i+1];
    ara[i+1] = ara[end];
    ara[end] = temp;

    return i+1;
}

void quicsort(int ara[], int began, int end)
{
    if(began < end)
    {
        int p = partion(ara, began, end);
        quicsort(ara, began, end);
        quicsort(ara, p+1, end);
    }
}

int main()
{
    int n, i, j, temp, hole, ara[100];

    printf("Enter the array size: \n");

    scanf("%d", &n);

    printf("Enter the array element: \n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    quicsort(ara, 0, n-1);

    for(i = 0; i < n; i++)
    {
        printf("%d", ara[i]);
    }

    return 0;
}
