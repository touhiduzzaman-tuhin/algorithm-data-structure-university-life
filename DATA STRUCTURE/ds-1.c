#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int roll;
    struct node *next;
}node_t;

node_t *head = NULL;

void append_node(int roll)
{
    if(head == NULL){
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
        newnode -> next = current_node -> next;
        current_node -> next = newnode;
    }
}

/*void delete_node(int roll)
{
    node_t *current_node = head;
    node_t *previous_node = NULL;
    while(current_node -> roll != roll){
        previous_node = current_node;
        current_node = current_node -> next;
    }

    if(current_node == head){
        node_t *temp = head;
        head = head -> next;
        free(temp);
    }
    else{
        previous_node -> next = current_node -> next;
        delete(current_node);
    }
}*/

void add_node(int roll1, int roll2)
    {
        node_t *current_node = head;

        while(current_node -> roll != roll1){
            current_node = current_node -> next;
        }
        node_t *newnode = malloc(sizeof(node_t));
        newnode -> roll = roll2;
        newnode -> next = current_node -> next;
        current_node -> next = newnode;
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
    append_node(1);
    append_node(6);
    append_node(5);
    add_node(5,2);
    //delete_node(5);
    print();
}
