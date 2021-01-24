#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    float data1;
    struct node *next;
}node_t;

node_t *head = NULL;

void append(int data, float data1)
{
    if(head == NULL){
        head = malloc(sizeof(node_t));
        head -> data = data;
        head -> data1 = data1;
        head -> next = NULL;
    }
    else{
        node_t *current_node = head;
        while(current_node -> next != NULL){
            current_node = current_node -> next;
        }
        node_t *newnode = malloc(sizeof(node_t));
        newnode -> data = data;
        newnode -> data1 = data1;
        newnode -> next = current_node -> next;
        current_node -> next = newnode;
    }
}

void print()
{
    node_t *current_node = head;

    while(current_node != NULL){
        printf("%d\n", current_node -> data);
        printf("%.2f\n", current_node -> data1);
        current_node = current_node -> next;
    }

}

int main()
{
    append(1,1.3);
    append(2,4.8);
    append(2,9.0);
    print();
}
