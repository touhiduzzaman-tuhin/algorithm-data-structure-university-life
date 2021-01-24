#include <stdio.h>

int maxsize = 100;
int stack[100];
int top = -1;

void option()
{
    printf("Enter 1 for push\n");
    printf("Enter 2 for pop\n");
    printf("Enter 3 for top\n");
    printf("Enter 4 for elements\n");
    printf("Enter 0 for exit\n");
}

int Empty_stack()
{
    if(top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int Full_stack()
{
    if(top == maxsize){
        return 1;
    }
    else{
        return 0;
    }
}

void push(int data)
{
    if(!Full_stack){
        top = top + 1;
        data = stack[top];
        return data;
    }
    else{
        printf("Stack is full\n");
    }
}

void pop()
{
    int data;

    if(!Empty_stack){
        stack[top] = data;
        top = top - 1;
        return data;
    }
    else{
        printf("Stack is empty\n");
    }
}

void peak()
{
    return stack[top];
}

int main()
{
    int i, j, k;
    int n, data;
    option();

    while(1){
        scanf("%d", &n);

        if(n == 1){
            printf("push\n");
            scanf("%d", &data);
            push( data );
        }
        else if(n == 2){
            printf("pop\n");
            pop();
        }
        else if(n == 3){
            if(top <= maxsize){
                printf("top\n");
                printf("%d\n", stack[top]);
            }
            else{
                printf("stack is empty\n");
            }
        }
        else if(n == 4){
            if(top == -1){
                printf("stack is empty\n");
            }
            else{
                printf("all element\n");
                for(i = top; i <= maxsize; i++){
                    printf("%d ", stack[i]);
                }
            }
        }
        else if(n == 0){
            break;
        }

        printf("\n\n");
        option();
    }

    return 0;
}
