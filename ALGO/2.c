#include <stdio.h>

int main()
{
    int n, i, a, count = 0, ara[100];

    printf("Enter the array size: \n");

    scanf("%d", &n);

    printf("Enter the array element: \n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    printf("Enter the search element: \n");

    scanf("%d", &a);

    for(i = 0; i < n; i++)
    {
        if(ara[i] == a)
        {
            //printf("%d found at position %d\n", a, ara[i]);
            count++;
        }
    }

    printf("%d found at position %d\n", a, ara[i]);
    printf("%d found %d times\n", a, count);

    return 0;
}
