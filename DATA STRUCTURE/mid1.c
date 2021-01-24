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
void append_node(int roll)
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
        newnode -> roll = 8;
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
void delete_node(int roll)
{
    nodes *current = root;
    nodes *previous = NULL;

    while(current -> roll != 5){
        previous = current;
        current = current -> next;
    }
        previous -> next = current -> next;
        free(current);
}
/*int count()
{
    nodes *current = root;
    int c = 0;
    while(current != NULL){
        //printf("%d\n", current -> roll);
        c++;
        current = current -> next;
    }
    return c;
}*/
int count(int element)
{
    nodes *current = root;
    int c = 0;
    while(current != NULL){
        //printf("%d\n", current -> roll);
        if(current == element){
            c++;
        }
        current = current -> next;
    }
    return c;
}


int main()
{
    append(1);
    append(6);
    append(5);
    //pop(5,2);
    delete_node(9);
    append_node(7);
    count(4);
    print();

    return 0;
}
