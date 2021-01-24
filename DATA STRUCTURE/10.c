#include <stdio.h>

int main()
{
    int i;

    for(i = 0; i < 5; i++){
        if(i % 3 == 0){
            printf("Start\n");
            continue;
            printf("End\n");
        }
        else{
            printf("we are dead\n");
            break;
        }

        printf("Index is %d\n", i);
    }

    return 0;
}

