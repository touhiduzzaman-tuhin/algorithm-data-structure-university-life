#include <stdio.h>

int main()
{
    int ara[1000], n, i;

    printf("Enter the array size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    bubble_sort();

    for(i = 0; i < n; i++)
    {
        printf("%d\n", ara[i]);
    }
}

    void bubble_sort(int ara[], int n)
    {

    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(ara[i] > ara[i + 1])
            {
                temp = ara[i];
                ara[i] = ara[i + 1];
                ara[i + 1] = temp;
            }
        }
    }
}

