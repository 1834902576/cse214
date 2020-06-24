/*  Define a function to print single node (Address, Value, and Next Address)
    of the Linked List and do the same as problem 1. (Use ‘typedef’ keyword,
    Don’t use DMA) */

#include<stdio.h>

typedef struct node
{
    int value;
    struct node *next;
} Node;

void print_node(Node *temp);

int main()
{
    Node a, b, c;
    Node *head = NULL;

    head = &a;

    a.value = 10;
    a.next = &b;
    print_node(&a);

    b.value = 20;
    b.next = &c;
    print_node(&b);

    c.value = 30;
    c.next = NULL;
    print_node(&c);

    return 0;
}

void print_node(Node *temp)
{
    printf("%p \t %d \t %p\n", temp, temp->value, temp->next);
}
