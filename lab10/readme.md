
** Chapter 1:Introduction

A queue is a collection of elements that are kept in a sequence and can be modified by the addition of element at one end of the sequence which is also known as tail and the deletion from the other end of the sequence which is also called as front. Queue is an abstract data type.
We can do various operations using queue data structure. They are given below:
•	Empty

•	Size

•	Top

•	Push

•	Pop

•	Display

Empty: Linked list contains a ‘head’ pointer. If the head is null it’s called empty.

Size: Indicates the total element of a queue.

Top: Adding an element at the front of a queue is called top.

Push: Adding an element at the end of the queue is called push.

Pop: Removing an element from a linked list is called pop.
 

** Chapter 2: Uses of Queue

Queue is used to maintain FIFO (First in First Out). There are many uses of queue in computer system as well as in real life. Some of them are:
•	Call center uses queue to hold people calling in order as it can’t be possible to take all the calls at a time.

•	Computer needs to handle multi-user, Multi-Programming environment. To handle this all thing a computer has to do several jobs at a time. For this the concept of queue is used.
•	In a ticket counter the concept of queue is used to maintain the order of its customer.

•	In a bank one needs to wait to withdraw cash. This thing maintains a system which is FIFO. So, this is also a concept of queue.

•	Any kind of service that follows first come first service use the concept of queue.

These are some uses of queue in real life and in a computer system. 





 
** Chapter 3: Code

1.	/*Design a Queue data structure using C 
2.	*/  
3.	#include <stdio.h>  
4.	#include <stdlib.h>  
5.	typedef struct Node node;  
6.	struct Node  
7.	{  
8.	    int value;  
9.	    node *next;  
10.	};  
11.	void push(int value);  
12.	void pop();  
13.	int top();  
14.	void empty();  
15.	void display();  
16.	void size();  
17.	void menu();  
18.	node *head,*back,*temp,*first;  
19.	int count = 0;  
20.	  
21.	int main()  
22.	{  
23.	    head = NULL;  
24.	    menu();  
25.	}  
26.	  
27.	void menu()  
28.	{  
29.	    int n, option, first_element;  
30.	    do  
31.	    {  
32.	        system("cls");  
33.	        printf(" 1 - Push\n");  
34.	        printf(" 2 - Pop\n");  
35.	        printf(" 3 - Top\n");  
36.	        printf(" 4 - Empty\n");  
37.	        printf(" 5 - Display\n");  
38.	        printf(" 6 - Size\n");  
39.	        printf(" 7 - Exit\n");  
40.	        printf("Enter Option : ");  
41.	        scanf("%d", &option);  
42.	        if( option == 1)  
43.	        {  
44.	            printf("Enter value : ");  
45.	            scanf("%d",&n);  
46.	            push(n);  
47.	        }  
48.	        else if(option == 2)  
49.	        {  
50.	            pop();  
51.	        }  
52.	        else if (option == 3)  
53.	        {  
54.	            first_element = top();  
55.	            if (first_element == 0)  
56.	                 printf("\n Sorry!Element not found...");  
57.	            else  
58.	                printf("Top element is : %d",first_element);  
59.	            getchar();  
60.	            printf("\n\nPress Enter to Continue:\n");  
61.	            getchar();  
62.	        }  
63.	        else if (option == 4)  
64.	        {  
65.	            empty();  
66.	            getchar();  
67.	            printf("\n\nPress Enter to Continue:\n");  
68.	            getchar();  
69.	        }  
70.	        else if(option == 5)  
71.	        {  
72.	            display();  
73.	            getchar();  
74.	            printf("\n\nPress Enter to Continue:\n");  
75.	            getchar();  
76.	        }  
77.	        else if( option == 6)  
78.	        {  
79.	            size();  
80.	            getchar();  
81.	            printf("\n\nPress Enter to Continue:\n");  
82.	            getchar();  
83.	        }  
84.	        else if (option == 7)  
85.	        {  
86.	            exit(0);  
87.	        }  
88.	        else  
89.	        {  
90.	            printf("\nInvalid Option!");  
91.	            exit(0);  
92.	            getchar();  
93.	            printf("\n\nPress Enter to Continue:\n");  
94.	            getchar();  
95.	  
96.	        }  
97.	    }  
98.	    while(option != 7);  
99.	}  



