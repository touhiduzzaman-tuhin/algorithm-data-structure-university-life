#include <stdio.h>
#include <stdlib.h>

typedef struct head
{
    int x;
    float y;
    char c;
    struct node *next;
}head_t;

head_t *root = NULL;


void append(int x, float y, char c)
{
    if(root == NULL){
        root = malloc(sizeof(head_t));
        root -> x = x;
        root -> y = y;
        root -> c = c;
        root -> next = NULL;
    }
    else{
        head_t *current = root;
        while(current -> next != NULL){
            current = current -> next;
        }
        head_t *newnode = malloc(sizeof(head_t));
        newnode -> x = x;
        newnode -> y = y;
        newnode -> c = c;
        newnode -> next = current -> next;
        current -> next = newnode;
        newnode  = newnode -> next;
    }
}
int count()//int element
{
    head_t *current = root;
    int c = 0;
    while(current != NULL){
        //printf("%d\n", current -> roll);
        //if(current == element){
            c++;
        //}
        current = current -> next;
    }
    return c;
}

void print()
{
    head_t *current = root;
    while(current != NULL){
        printf("%d\n", current -> x);
        printf("%.2f\n", current -> y);
        printf("%c\n", current -> c);
        current = current -> next;
    }
}

int main()
{
    append(1,3.0,'a');
    append(6,7.6,'v');
    append(5,8.4,'d');
    count();
    //pop(5,2);
    //delete_node(5);
    //append_node(8);
    print();

    return 0;
}
