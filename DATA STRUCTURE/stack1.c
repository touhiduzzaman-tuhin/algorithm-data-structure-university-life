#include <stdio.h>

int maxsize = 100;
int stack[100];
int top = -1;

int Empty_stack()
{
    //int top;

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

int pop()
{
    int data;
    if(!Empty_stack()){
        data = stack[top];
        top = top - 1;
        return data;
    }
    else{
        printf("Stack is empty\n");
    }
}

int push(int data)
{
   if(!Full_stack()){
    top = top + 1;
    stack[top] = data;
    return data;
   }
   else{
    printf("Stack is full\n");
   }
}

int peak()
{
    return stack[top];
}

int main()
{
    push('a');
    push('b');
    push('c');
    push('d');
    push('e');
    push('f');
    push('g');
   // pop(3);

   int i, a, n, m;
   char ara[100];

   /*printf("Enter how many element you push on the stack:\n");

   scanf("%d", &n);

   printf("Enter your push value :\n");

   for(i = 1; i <= n; i++){
        scanf("%c", &ara[i]);
        push(ara[i]);
   }*/
   printf("If u want to see push enter 1\n");
   printf("If u want to see pop enter 2\n");
   printf("If u want to see top of the element enter 3\n");

   scanf("%d", &a);

   if(a == 1){
    printf("Your push element is:\n");

   for(i = 1; i <= n; i++){
        printf("%d\n", ara[i]);
        //push(m);
        }
   }


   else if(a == 2){
    printf("Your pop element is:\n");

    while(!Empty_stack()){
        int data = pop();
        printf("%d\n", data);
        }
   }

   if(a == 3){
    printf("Your top of the element is:\n");
    printf("%d\n", peak());
   }

    /*printf("Your push element is:\n");

    while(!Full_stack()){
        int data = push();
        printf("%d\n", data);
    }*/


    return 0;
}
