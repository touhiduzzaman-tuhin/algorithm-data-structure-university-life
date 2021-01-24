#include <stdio.h>

int ar[100];
int start, end;

void option()
{
    printf("Enter 1 for push\n");
    printf("Enter 2 for pop\n");
    printf("Enter 3 for top\n");
    printf("Enter 4 for elements\n");
    printf("Enter 0 for exit\n");
}

void push(int num)
{
    end++;
    ar[end] = num;
    return;
}

void pop()
{
    start++;
}

int main()
{
    int i, j, k;
    start = end = -1;

    int op, num;

    option();
    start++;

    while(1){
        scanf("%d", &op);

        if(op == 1){
            printf("Enter push value\n");
            scanf("%d", &num);
            push( num );
        }
        else if(op == 2){
            printf("pop value\n");
            pop();
        }
        else if(op == 3){
            if(start <= end){
               printf("frount value\n");
                printf("%d", ar[start]);
            }
            else{
                printf("Stack is empty\n");
            }
        }
        else if(op == 4){
            if(end == -1 || end < start){
                printf("Stack is empty\n");
            }
            else{
                printf("all elements\n");
                for(i = start; i <= end; i++){
                printf("%d ", ar[i]);
                }
            }
        }
        else if(op == 0){
            break;
        }
        printf("\n\n");
        option();
    }

    return 0;
}
