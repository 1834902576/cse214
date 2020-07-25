/* Md. Mizanur Rahman
   1834902576 */

 /* Design a queue data structure in c
*/

#include <stdio.h>
#include <stdlib.h>
#include "header_file.h"


//void create_empty_queue();
void empty();
node* push(node *temp, int value);
void display(node *temp);
node* pop(node *temp);
void queue_size(node *temp);
void top(node *temp);
void menu();

int main()
{
    menu();
    return 0;
}

void menu()
{
    node *head = NULL;
    int n, option, front_element;
    do
    {
        system(" cls ");
        printf("\n Choose Operations: \n");
        printf("\n 1 : Display");
        printf("\n 2 : Empty");
        printf("\n 3 : Size");
        printf("\n 4 : Top");
        printf("\n 5 : Push");
        printf("\n 6 : Pop");
        printf("\n 7 : Exit Program");

        printf("\n");

        printf("\n Enter an option : ");
        scanf("%d", &option);

        if(option == 1)
        {
            display(head);

            getchar();
            printf("\n Press Enter to Continue.\n");
            getchar();
        }
        else if(option == 2)
        {
            empty(head);

            getchar();
            printf("\n Press Enter to Continue.\n");
            getchar();
        }
        else if(option == 3)
        {
            queue_size(head);

            getchar();
            printf("\n Press Enter to Continue.\n");
            getchar();
        }
        else if (option == 4)
        {
            top(head);
            getchar();
            printf("\n Press Enter to Continue .\n");
            getchar();
        }
        else if(option == 5)
        {
            printf(" Enter Queue Element : ");
            scanf("%d", &n);

            head = push(head,n);
            printf("\n %d data is inserted.\n",n);

            getchar();
            printf("\n Press Enter to Continue the program...\n");
            getchar();
        }
        else if(option == 6)
        {
            head = pop(head);

            getchar();
            printf("\n Press Enter to Continue the program...\n");
            getchar();
        }
        else if (option == 7)
        {
            exit(0);
        }
        else
        {
            printf("\n Invalid Option");

            getchar();
            printf("\n Press Enter to continue.\n");
            getchar();
        }
    }
    while(option != 7);
}
