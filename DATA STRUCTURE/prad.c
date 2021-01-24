#include <stdio.h>

int maxsize = 100;
int stack[100];
int top = -1;

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
        top = top + 1;
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

void option()
{
    printf("Enter 1 for push\n");
    printf("Enter 2 for pop\n");
    printf("Enter 3 for peak\n");
    printf("Enter 0 for exit\n");
}

int main()
{
    int op, num;
    option();

    while(~sacnf("%d", &op)){
        if(op == 1){
            printf("Enter your push value\n");
            scanf("%d", &num);
            push( num );
        }

        else if(op == 2){
            printf("Enter your pop value\n");
            pop();
        }

        else if(op == 3){
            printf("Enter your peak value\n");
        }

        else if(op == 0){
            break;
        }
}





    return 0;
}
