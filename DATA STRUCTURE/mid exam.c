#include <stdio.h>

int main()
{
    int i, ara[5], min;

    for(i = 0; i < 5; i++){
        scanf("%d", &ara[i]);
    }

 `   min = ara[0];

    for(i = 0; i < 5; i++){
        if(min > ara[i]){
            min = ara[i];
        }
    }

    printf("Minimum value is = %d\n", min);

    return 0;
}
