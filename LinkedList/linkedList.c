#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

struct node

{

     int data;

     struct node *next;

} * snode;
*first;

void createlist(int n); // Function Prototype

void display(); // Function Prototype
// void Insert(struct node *p,int index,int x)
// {
// struct node *t;
// int i;
// if(index < 0 || index > x)
// return;
// t=(struct node *)malloc(sizeof(struct node));
// t->data=x;
// if(index == 0)
// {
// t->next=snode;
// snode=t;
// }
// else
// {
// for(i=0;i<index-1;i++)
// p=p->next;
// t->next=p->next;
// p->next=t;
// }
// }
void deleteNode(struct node **head_ref, int position)
{
     // If linked list is empty
     if (*head_ref == NULL)
          return;

     // Store head node
     struct node *temp = *head_ref;

     // If head needs to be removed
     if (position == 0)
     {
          *head_ref = temp->next; // Change head
          free(temp);             // free old head
          return;
     }

     // Find previous node of the node to be deleted
     for (int i = 0; temp != NULL && i < position - 1; i++)
          temp = temp->next;

     // If position is more than number of nodes
     if (temp == NULL || temp->next == NULL)
          return;

     // Node temp->next is the node to be deleted
     // Store pointer to the next of node to be deleted
     struct node *next = temp->next->next;

     // Unlink the node from linked list
     free(temp->next); // Free memory

     temp->next = next; // Unlink the deleted node from list
}

void main()

{

     int n;

     printf("Enter how many nodes you wants to create in the linked list:-\n");

     scanf("%d", &n);

     createlist(n); // Function calling

     printf("The Created List is:-\n");

     display(); // Function calling

     printf("after deletion the given LL is :- ");
     deleteNode(first, 5);

     getch();
}

void createlist(int n)

{

     struct node *q, *t;

     int num, i;

     snode = (struct node *)malloc(sizeof(struct node));

     if (snode == NULL)

     {

          printf("Memort cannot be allocated");
     }

     else

     {

          printf("Give the input for 1st Node");

          scanf("%d", &num);

          snode->data = num;

          snode->next = NULL;

          t = snode;

          for (i = 2; i <= n; i++)

          {

               q = (struct node *)malloc(sizeof(struct node));

               if (q == NULL)

               {

                    printf("Memort cannot be allocated");
               }

               else

               {

                    printf("Give the input for %d st node ", i);

                    scanf("%d", &num);

                    q->data = num;

                    q->next = NULL;

                    t->next = q;

                    t = t->next;
               }
          }
     }
}

void display()
{
     struct node *p;
     if (snode)
     {
          void display();

          {

               struct node *p;

               if (snode == NULL)

               {

                    printf("The created linked list is empty");
               }

               else

               {

                    p = snode;

                    while (p != NULL)

                    {

                         printf("%d ->", p->data);

                         p = p->next;
                    }
               }
          }
     }
}
//  void LSearch(struct node *p,int key)
// {
// struct node *q;
// while(p!=NULL)
// {
// if(key==p->data)
// {
// q->next=p->next;
// p->next=first;
// first=p;
// return p;
// }
// q=p;
// p=p->next;
// }
// return NULL;
// }
