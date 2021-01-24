#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int roll;
    struct node *next;
}node_t;

node_t *root = NULL;

void append(int roll)
{
    if(root == NULL){
        root = malloc(sizeof(node_t));
        root -> roll = roll;
        root -> next = NULL;
    }
    else{
        node_t *current_node = root;
        while(current_node -> next != NULL){
            current_node = current_node -> next;
        }
        node_t *newnode = malloc(sizeof(node_t));
        newnode -> roll = roll;
        newnode -> next = NULL;
        current_node -> next = newnode;
    }
}

void delete_node(int roll)
{
    node_t *current_node = root;
    node_t *previous_node = NULL;

    while(current_node -> roll != roll){
        previous_node = current_node;
        current_node = current_node -> next;
    }

    if(current_node == root){
        node_t *temp = root;
        root = root -> next;
        free(temp);
    }
    else{
        previous_node -> next = current_node -> next;
        free(current_node);
    }
}

void pop(int roll1, int roll2)
{
    node_t *current_node = root;
    while(current_node -> roll != roll1){
        current_node = current_node -> next;
    }
    node_t *newnode = malloc(sizeof(node_t));
    newnode -> roll = roll1;
    newnode -> next = current_node -> next;
    current_node -> next = newnode;
}

void print()
{
    node_t *current_node = root;
    while(current_node != NULL){
        printf("%d\n", current_node -> roll);
        current_node = current_node -> next;
    }
}

/*int main()
{
    append(1);
    append(6);
    append(5);
    pop(5,2);
    delete_node(5);
    print();
}
*/
int main()
{
    int i, n;

    for(i = 0; i < 8; i++){
        append(scanf("%d", &n));
    }
    pop(5,3);
    delete_node(5);
    print();
}
