/*  Define a Structure for Linked List Node, Declare three variable,
    Assign value and next address in those variable. Print the variable address,
    value and next variable address. (Don’t use any Function, ‘typedef’ keyword
    and Dynamic Memory Allocation (DMA)) */

#include<stdio.h>

struct node
{
    int value;
    struct node *next;
};

int main()
{
    struct node a, b, c;
    struct node *head = NULL;

    head = &a;

    a.value = 10;
    a.next = &b;
    printf("%p \t %d \t %p\n", &a, a.value, a.next);

    b.value = 20;
    b.next = &c;
    printf("\n%p \t %d \t %p\n", &b, b.value, b.next);

    c.value = 30;
    c.next = NULL;
    printf("\n%p \t %d \t %p\n", &c, c.value, c.next);

    return 0;
}
