#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int val;
    struct node * next;
} node;

void print(node * head)
{
    node * current = head;

    while(current != NULL)
    {
        printf("%d -> ",current->val);
        current = current->next;
    }
    puts("NULL");
}

void push(node ** head,int val)
{
    node * temp;
    if(*head == NULL)
    {
        *head = malloc(sizeof(node));
        temp = *head;
        temp->val = val;
        temp->next = NULL;
        return;
    }

    node * current = *head;
    while(current->next != NULL)
        current = current->next;

    current->next = malloc(sizeof(node));
    current->next->val = val;
    current->next->next = NULL;
}

void alter(node ** head)
{
    node * current = *head;
    int i;
    for(i=0; i<499; i++)
        current = current->next;
    node *last = current;
    node * temp1 = current->next;
    node * temp2 = *head;
    current = *head;
    while(current->next != NULL)
        current = current->next;
    current->next = temp2;
    *head = temp1;
    last->next = NULL;
}

int main()
{
    node * head = NULL;
    int i;
    for(i=1;i<=1000;i++)
        push(&head,i);

    print(head);

    puts("\n");

    alter(&head);

    print(head);

    return 0;
}
