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
    /*if(root == NULL){
        root = malloc(sizeof(nodes));
        root -> roll = roll;
        root -> next = NULL;
    }*/
        nodes *current = root;
        while(current -> next != NULL){
            current = current -> next;
        }
        nodes *newnode = malloc(sizeof(nodes));
        newnode -> roll = roll;
        newnode -> next = NULL;
        current -> next = newnode;
    }
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
    //pop(5,2);
    //delete_node(5);
    //append_node(8);
    print();
}
