/*
Md. Mizanur Rahman
1834902576
*/
/*Design a Queue data structure using C
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct Node node;
struct Node
{
    int value;
    node *next;
};
void push(int value);
void pop();
int top();
void empty();
void display();
void size();
void menu();
node *head,*back,*temp,*first;
int count = 0;

int main()
{
    head = NULL;
    menu();
}

void menu()
{
    int n, option, first_element;
    do
    {
        system("cls");
        printf(" 1 - Push\n");
        printf(" 2 - Pop\n");
        printf(" 3 - Top\n");
        printf(" 4 - Empty\n");
        printf(" 5 - Display\n");
        printf(" 6 - Size\n");
        printf(" 7 - Exit\n");
        printf("Enter Option : ");
        scanf("%d", &option);
        if( option == 1)
        {
            printf("Enter value : ");
            scanf("%d",&n);
            push(n);
        }
        else if(option == 2)
        {
            pop();
        }
        else if (option == 3)
        {
            first_element = top();
            if (first_element == 0)
                 printf("\n Sorry!Element not found...");
            else
                printf("Top element is : %d",first_element);
            getchar();
            printf("\n\nPress Enter to Continue:\n");
            getchar();
        }
        else if (option == 4)
        {
            empty();
            getchar();
            printf("\n\nPress Enter to Continue:\n");
            getchar();
        }
        else if(option == 5)
        {
            display();
            getchar();
            printf("\n\nPress Enter to Continue:\n");
            getchar();
        }
        else if( option == 6)
        {
            size();
            getchar();
            printf("\n\nPress Enter to Continue:\n");
            getchar();
        }
        else if (option == 7)
        {
            exit(0);
        }
        else
        {
            printf("\nInvalid Option!");
            exit(0);
            getchar();
            printf("\n\nPress Enter to Continue:\n");
            getchar();

        }
    }
    while(option != 7);
}


void push(int value)
{
    if (back == NULL)
    {
        back = ( node *)malloc(sizeof( node));
        back->value = value;
        back->next = NULL;
        head = back;
    }
    else
    {
        temp=( node *)malloc(sizeof(node));
        back ->next = temp;
        temp->value = value;
        temp->next = NULL;

        back = temp;
    }
    count++;
}

void pop()
{
    first = head;

    if (first == NULL)
    {
        printf("\n Element is Empty...");
        return;
    }
    else if (first->next != NULL)
    {
        first = first->next;
        free(head);
        head = first;
    }
    else
    {
        free(head);
        head = NULL;
        back = NULL;
    }
    count--;
    getchar();
    printf("\n\nPress Enter to Continue:\n");
    getchar();
}

int top()
{
    if ((head != NULL) && (back != NULL))
        return(head->value);
    else
        return 0;
    getchar();
    printf("\n\nPress Enter to Continue:\n");
    getchar();
}

void empty()
{
    if ((head == NULL) && (back == NULL))
        printf("\nEmpty ");
    else
        printf("Not empty");

}
void display()
{
    first = head;

    if ((first == NULL) && (back == NULL))
    {
        printf("Queue is empty");
        return;
    }
    while (first != back)
    {
        printf("%d ", first->value);
        first = first->next;
    }
    if (first == back)
        printf("%d", first->value);
}
void size()
{
    printf("\nSize : %d", count);
}

