#include <stdio.h>

int main()
{
    int n, i, j, a, hole, temp = 0, start, end, mid, ara[100];

    printf("Enter the note size: \n");

    scanf("%d", &n);

    printf("Enter the notes: \n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    printf("Enter the amount: \n");

    scanf("%d", &a);

    for(i = 0; i < n; i++)
    {
        hole = a / ara[i];
        a = a % ara[i];

        if(hole > 0)
        {
            printf("%d note %d\n", ara[i], hole);
        }

        temp = temp + hole;
    }

    printf("Total notes: %d\n", temp);

    return 0;
}
