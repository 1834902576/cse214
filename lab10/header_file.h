
#include <stdio.h>
#include <stdlib.h>

/* Creating Structure for a Queue */
typedef struct Node node;
struct Node
{
    int value;
    node *next;
};

/* Function to Display the Queue Elements */
void display(node *temp)
{
    if (temp == NULL)
    {
        printf(" Queue is empty ");
        return;
    }
    while (temp != NULL)
    {
        printf("\t%d", temp->value);
        temp = temp->next;
    }
}

/* Function to Display Empty operation */
void empty(node *temp)
{
    if ((temp == NULL))
    {
        printf("\nQueue is empty.");
    }
    else
    {
        printf("\n Queue is not empty");
    }
}

/* Function to Push Elements in the Queue */
node* push(node *temp, int value)
{
    node *head = temp, *new_node;
    if (temp == NULL)
    {
        node *new_head;
        new_head = (node*) malloc(sizeof (node) );
        new_head->value = value;
        new_head->next = NULL;
        return new_head;
    }
    while(temp->next)
        temp = temp->next;
    new_node = (node*) malloc(sizeof (node) );
    new_node->value = value;
    new_node->next = NULL;
    temp->next = new_node;
    return head;
}

/* Function to Pop Value */
node* pop(node *temp)
{
    if(temp != NULL)
    {
        node *new_head = temp->next;
        printf("\n Deleted value : %d ", temp->value);
        free(temp);
        return new_head;
    }
    printf("\nNo Elements Left, Empty Queue");
    return temp;
}

/* Function to get Queue Size */
void queue_size(node *temp)
{
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    printf("\n Queue size is: %d", count);
}

/* Function to Return the Top Element of Queue */
void top(node *temp)
{
    if(temp != NULL)
    {
        printf("\nTop element : %d", temp->value);
    }
    else
    {
        printf("\nNo Top element ");
    }
}
