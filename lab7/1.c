/*  Define a “Create” function to declare a Linked List with four node using dynamic
    memory allocation. Print the complete Linked List after calling create function. */

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
}Node;

Node* create_list();
void print_list(Node *temp);

int main()
{
    Node *head = NULL;

    head = create_list();
    print_list(head);

    return 0;
}

Node* create_list()
{
    Node *p, *q, *r, *s;

    p = (Node *) malloc(sizeof(Node));
    q = (Node *) malloc(sizeof(Node));
    r = (Node *) malloc(sizeof(Node));
    s = (Node *) malloc(sizeof(Node));

    p->value = 10;
    p->next = q;

    q->value = 20;
    q->next = r;

    r->value = 30;
    r->next = s;

    s->value = 40;
    s->next = NULL;

    return p;
}

void print_list(Node *temp){
    while(temp!=NULL){
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}
