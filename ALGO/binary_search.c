#include <stdio.h>

int main()
{

    int i, n, a, ara[1000];

    printf("Enter the array size: ");

    scanf("%d", &n);

    printf("Enter the elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d" ,&ara[i]);
    }

    printf("Enter the search element: ");

    scanf("%d", &a);

    for(i = 0; i < n; i++)
    {
        if(ara[i] == a)
        {
            printf("Find the element at %d position.\n", ara[i]);
            break;
        }
    }

    return 0;


}
