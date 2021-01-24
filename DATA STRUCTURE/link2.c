#include <stdio.h>
#include <stdio.h>

typedef struct node
{
    int roll;
    struct node *next;
}node_t;

node_t * head = NULL;

void add_middle(int roll, int roll2)
{
    node_t *current_node = head;
    while(current_node -> next != roll)
    {
        current_node = current_node -> next;
    }
    node_t *newnode = malloc(sizeof(node_t));
    newnode -> roll = roll;
    newnode - > next = current_node -> next;
    current_node -> next = newnode;
}
