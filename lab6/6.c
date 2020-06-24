/*  Define a function to display the complete Linked List in reverse order with
    a recursive function using problem 4. */
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int value;
    struct node *next;
} Node;
void print_list_reverse(Node *temp);
int main()
{
    Node *a, *b, *c;
    Node *head = NULL;
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
    print_list_reverse(head);
    return 0;
}
void print_list_reverse(Node *temp)
{
    if(temp==NULL)
    {
        printf("Empty List\n");
        return;
    }
    else
    {
        if(temp==NULL)
        {
            return;
        }
        print_list_reverse(temp->next);
        printf("%d ",temp->value);
    }
}
