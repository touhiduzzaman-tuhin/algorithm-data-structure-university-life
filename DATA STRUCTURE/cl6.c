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
        printf("%d ", current_node -> roll);
        current_node = current_node -> next;
    }
    printf("\n");
}


int main()
{
    int i, j, n, m, a;

    printf("Enter sum of last 4 digit: \n");
    scanf("%d", &n);
    m = 40 - n;

    printf("\n");

    for(i = 1; i <= m; i++){
            append(0);
            append(1);
            append(7);

        for(j = 1; j <= 8; j++){
            scanf("%d", &a);
            append(a);
        }
        //printf("\n");
    }
   // printf("\n");

    print();
}

