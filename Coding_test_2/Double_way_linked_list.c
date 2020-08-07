/** ID last Digit 6 **/
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int Data;
    int value;
    struct node *next;
    struct node *prev;
} Node;
void menu();
Node* create_list();
void print_list(Node *temp);
Node* insert_at(Node *temp, int pos, int value);
Node* delete_front(Node *temp);
Node* print_reverse(Node *list);
int main()
{
    menu();
    return 0;
}
void menu()
{
    Node *head = NULL;
    head = create_list();
    int value, option;
    do
    {
        system("cls");
        printf("\t\t------- Double Way Linked List -------\t\t");
        printf("\n1. Insert At\n");
        printf("2. Delete Front\n");
        printf("3. Copy Recursively\n");
        printf("4. Merge Two List\n");
        printf("5. Display Reverse\n");
        printf("6. Display\n");
        printf("7. Exit\n");
        printf("Enter your Option : ");
        scanf("%d", &option);
        if(option == 1)
        {
            int x, y;
            head = create_list();
            print_list(head);
            scanf("%d %d", &x, &y);
            head = insert_at(head, x, y);
            print_list(head);
            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
        else if(option == 2)
        {
            print_list(head);
            head = delete_front(head);
            print_list(head);
            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
        else if (option == 3)
        {
            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
        else if(option == 4)
        {
            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
        else if(option == 5)
        {
            printf("Display List: ");
            print_list(head);
            head = print_reverse(head);
            printf("Display List 1 in Reverse: ");
            print_list(head);
            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
        else if(option == 6)
        {
            printf("List: ");
            print_list(head);
            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
        else if (option == 7)
        {
            exit(0);
        }
        else
        {
            printf("\nInvalid Option, Please Option Between '1 to 7'");
            getchar();
            printf("\nPress Enter to Continue\n");
            getchar();
        }
    }
    while(option != 7);
}

Node* create_list()
{
    Node *a, *b, *c, *d;
    a = (Node *) malloc(sizeof(Node));
    b = (Node *) malloc(sizeof(Node));
    c = (Node *) malloc(sizeof(Node));
    d = (Node *) malloc(sizeof(Node));
    a->value = 15;
    a->next = b;
    b->value = 30;
    b->next = c;
    c->value = 45;
    c->next = d;
    d->value = 60;
    d->next = NULL;
    return a;
}
Node* print_reverse(Node *list)
{
    Node *first, *current, *temp;
    first = list;
    current = list->next;
    first->next = NULL;
    while(current)
    {
        temp = current->next;
        current->next = first;
        first = current;
        current = temp;
    }
    return first;
}

Node* delete_front(Node *temp)
{
    if(temp)
    {
        Node *new_head = NULL;
        new_head = temp->next;
        free(temp);
        return new_head;
    }
    else
        printf("Underflow Linked List");
    return temp;
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
void print_list(Node *temp)
{
    while(temp!=NULL)
    {
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}

