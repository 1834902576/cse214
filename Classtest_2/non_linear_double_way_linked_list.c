#include<stdio.h>
#include<stdlib.h>
#include "header_file.h"

void main_menu();

// Main Function
int main()
{
    node *head = NULL;
    main_menu();
    return 0;
}

void main_menu()
{
    int option;
    do
    {
        system("cls");
        printf("Enter an Option:\n");
        printf(" 1. Empty\n");
        printf(" 2. Size\n");
        printf(" 3. Push Front\n");
        printf(" 4. Pop Front\n");
        printf(" 5. Clear\n");
        printf(" 6. Display\n");
        printf("\nEnter Choice: ");
        scanf("%d", &option);
        if(option<=0 || option>11)
        {
            printf("\t Invalid Option \n");
            getchar();
            printf("\nPress Enter to Continue");
            getchar();

        }
        else if(option == 1)
        {
            empty(head);
            getchar();
            printf("\nPress Enter to Continue");
            getchar();
        }
        else if(option == 2)
        {
            size(head);
            getchar();
            printf("\nPress Enter to Continue");
            getchar();
        }
        else if(option == 3)
        {
            push_front();
        }
        else if(option == 4)
        {
            pop_front();
        }
        else if(option == 5)
        {
            clear();
            printf("Delete all");
            getchar();
            printf("\nPress Enter to Continue");
            getchar();
        }
         else if(option == 6)
        {
            display_list(head);
            getchar();
            printf("\n\nPress Enter to Continue");
            getchar();
        }
}



