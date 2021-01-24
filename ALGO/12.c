#include <stdio.h>

int a[100];

void marge(int, int, int);

void marge_sort(int low, int high)
{
    int mid;

    if(low < high)
    {
        mid = (low + high) / 2;

        marge_sort(low, mid);
        marge_sort(mid + 1, high);

        marge(low, mid, high);
    }
}

void marge(int low, int mid, int high)
{
    int h, i, j, k, b[100];

    h = low;
    i = low;
    j = mid + 1;

    while(h <= mid && j <= high)
    {
        if(a[h] <= a[j])
        {
            b[i] = a[h];
            h++;
        }

        else
        {
            b[i] = a[j];
            j++;
        }

        i++;
    }

    if(h > mid)
    {
        for(k = j; k <= high; k++)
        {
            b[i] = a[k];
            i++;
        }
    }

    else
    {
        for(k = h; k <= mid; k++)
        {
            b[i] = a[k];
            i++;
        }
    }

    for(k = low; k <= high; k++)
    {
        a[k] = b[k];
    }

}

int main()
{
    int n, i, j, hole, temp, start, end, mid;

    printf("Enter the array size: \n");

    scanf("%d", &n);

    printf("Enter the array element: \n");

    for(i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    marge_sort(1, n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}
