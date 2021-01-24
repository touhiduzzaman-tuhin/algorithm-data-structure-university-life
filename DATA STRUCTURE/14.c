#include <stdio.h>

int main()
{
    int ara[10], i, max, j, temp, n;

    printf("Enter how many number : \n");

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d", &ara[i]);
    }

    max = ara[0];

    for(i = 1; i <= n; i++){
        for(j = i+1; j <= n; j++){
            if(ara[j] > ara[i]){
                temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
    }

    for(i = 1; i <= 5; i++){
        printf("%d ", ara[i]);
    }

    return 0;
}
