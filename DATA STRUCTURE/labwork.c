#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int roll;
    struct node *next;
}nodes;

nodes *root = NULL;

///add (last / first)
void append(int roll)
{
    if(root == NULL){
        root = malloc(sizeof(nodes));
        root -> roll = roll;
        root -> next = NULL;
    }
    else{
        nodes *current = root;
        while(current -> next != NULL){
            current = current -> next;
        }
        nodes *newnode = malloc(sizeof(nodes));
        newnode -> roll = roll;
        newnode -> next = NULL;
        current -> next = newnode;
    }
}

/// delete (last / first)
void delete_node(int roll)
{
    nodes *current = root;
    nodes *previous = NULL;

    while(current -> roll != roll){
        previous = current;
        current = current -> next;
    }
    if(current == root){
        nodes *temp = root;
        root = root -> next;
        free(temp);
    }
    else{
        previous -> next = current -> next;
        free(current);
    }
}

///add (between two nodes)
void pop(int roll1, int roll2)
{
    nodes *current = root;

    while(current -> roll != roll1){
        current = current -> next;
    }
    nodes *newnode = malloc(sizeof(nodes));
    newnode -> roll = roll2;
    newnode -> next = current -> next;
    current -> next = newnode;
}

/// print
void print()
{
    nodes *current = root;
    while(current != NULL){
        printf("%d\n", current -> roll);
        current = current -> next;
    }
}

int main()
{
    append(1);
    append(6);
    append(5);
    pop(5,2);
    delete_node(5);
    print();

    return 0;
}
