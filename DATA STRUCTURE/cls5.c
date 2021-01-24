#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int roll;
    struct node *next;
}node_t;

node_t *head = NULL;

void append(int roll)
{
    if(head == NULL)
    {
        head = malloc(sizeof(node_t));
        head -> roll = roll;
        head -> next = NULL;
    }
    else{
        node_t *current_node = head;
        while(current_node -> next != NULL){
            current_node = current_node -> next;
        }
        node_t *newnode = malloc(sizeof(node_t));
        newnode -> roll = roll;
        newnode -> next = NULL;
        current_node -> next = newnode;
    }
}

void print()
{
    node_t *current_node = head;
    while(current_node != NULL){
        printf("%d\n", current_node -> roll);
        current_node = current_node -> next;
    }
}


int main()
{
    int i, n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    printf("\n\n");

    for(i = n + 1; i <= m; i++){
        append(i);
    }
    for(i = 1; i < n; i++){
        append(i);
    }
    print();
}
