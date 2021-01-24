#include <stdio.h>

int main()
{
    int ara[100], i, countara[100], count, n, j;

    printf("Enter the number of element in array : ");
    scanf("%d", &n);
    printf("Enter %d numbers :\n", n);

    for(i = 0; i < n; i++){
        scanf("%d", &ara[i]);
        countara[i] = -1;
    }

    for(i = 0; i < n; i++){
        count = 1;
        for(j = i+1; j < n; j++){
            if(ara[i]==ara[j]){
                countara[j] = 0;
                count++;
            }
        }
        if(countara[i] != 0){
            countara[i] = count;
        }
    }

    for(i = 0; i < n; i++){
        if(countara[i] != 0){
            printf("Element %d = Count %d\n", ara[i], countara[i]);
        }
    }

    return 0;
}
