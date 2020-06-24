/*  Use Dynamic Memory Allocation to create three elements of the Linked List and display
    (only value) the complete Linked List using a function. (Check Empty List) */

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} Node;

void print_list(Node *temp);

int main()
{
    Node *a, *b, *c;
    Node *head = NULL;

    print_list(head);

    a = (Node *) malloc(sizeof(Node));
    b = (Node *) malloc(sizeof(Node));
    c = (Node *) malloc(sizeof(Node));

    head = a;

    a->value = 10;
    a->next = b;

    b->value = 20;
    b->next = c;

    c->value = 30;
    c->next = NULL;

    print_list(head);

    return 0;
}

void print_list(Node *temp)
{
    if(temp==NULL)
    {
        printf("Empty List\n");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}
