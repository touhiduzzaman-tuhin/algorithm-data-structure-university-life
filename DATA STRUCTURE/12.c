#include <stdio.h>

int main()
{
    int i, j;

    for(i = 5; i >= i; i--){
        for(j = 1; j <= i; j++){
            printf("%4d", j);
        }
        printf("\n");
    }

    return 0;
}
