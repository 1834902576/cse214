/*  Implement an “Insert At” function to insert an element at the nth index of the Linked List. Take input
    ‘n’ and value from user. (Check index out of range) (Let, for the first element n = 1) */

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
}Node;

Node* create_list();
void print_list(Node *temp);
Node* insert_at(Node *temp, int pos, int value);

int main()
{
    int x, y;
    Node *head = NULL;

    head = create_list();
    print_list(head);
    scanf("%d %d", &x, &y);
    head = insert_at(head, x, y);
    print_list(head);

    return 0;
}
Node* create_list()
{
    Node *a, *b, *c, *d;

    a = (Node *) malloc(sizeof(Node));
    b = (Node *) malloc(sizeof(Node));
    c = (Node *) malloc(sizeof(Node));
    d = (Node *) malloc(sizeof(Node));

    a->value = 5;
    a->next = b;

    b->value = 10;
    b->next = c;

    c->value = 15;
    c->next = d;

    d->value = 20;
    d->next = NULL;

    return a;
}

void print_list(Node *temp){
    while(temp!=NULL){
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}


Node* insert_at(Node *temp, int pos, int value)
{
    Node *head = temp, *prev, *new_node;
    int i = 2;
    if(pos<1 || pos>4)
    {
        printf("Index out of range\n");
        return temp;
    }
    if(pos == 1)
    {
        new_node = (Node*) malloc(sizeof(Node) );
        new_node->value = value;
        new_node->next = temp;
        return new_node;
        }
    while(temp)
    {
        prev = temp;
        if(i == pos)
        {
            new_node = (Node*) malloc(sizeof(Node)) ;
            new_node->value = value;
            new_node->next = temp->next;
            prev->next = new_node;
            return head;
        }
        i++;
        temp = temp->next;
    }
    printf( "Invalid Index\n");
    return head;
}
