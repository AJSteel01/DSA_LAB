#include <stdio.h>

#include <stdlib.h>

#include <conio.h>

struct node

{

    struct node *lp;

    int data;

    struct node *rp;

} * snode;

void createDLL(int n);

void display();

void deletex(int x);

//void Adisplay();

int main()

{

    // clrscr();

    int n, x;

    printf("How many nodes you want to insert in DLL:- ");

    scanf("%d", &n);

    createDLL(n);

    printf("The Created Doubly linked list is:-\n");

    display();

    printf("\nEnter value that you want to delete:- ");

    scanf("%d", &x);

    deletex(x);

    //   Adisplay();

    getch();

    return 0;
}
void createDLL(int n)

{

    struct node *q, *t;

    int num, i;

    snode = (struct node *)malloc(sizeof(struct node));

    if (snode == NULL)

    {

        printf("Memory cannot be allocated");
    }

    else

    {
        printf("Give value for 1st node:- ");

        scanf("%d", &num);

        snode->data = num;

        snode->lp = NULL;

        snode->rp = NULL;

        t = snode;

        for (i = 2; i <= n; i++)

        {

            q = (struct node *)malloc(sizeof(struct node));

            if (q == NULL)

            {

                printf("Memory cannot be allocated");

                break;
            }

            else

            {

                printf("Give value for %d node:-", i);

                scanf("%d", &num);

                q->data = num;

                q->lp = NULL;

                q->rp = NULL;

                q->lp = t;

                q->lp->rp = q;

                t = t->rp;
            }
        }
    }
}

void display()

{

    struct node *p;

    if (snode == NULL)

    {

        printf("The created Doubly Linked List is Empty");
    }

    else

    {

        p = snode;

        while (p != NULL)

        {

            printf(" <--> %d", p->data);

            p = p->rp;
        }
    }
}

void deletex(int x)

{

    struct node *w;

    w = snode;

    if (w == NULL)

    {

        printf("Given Linked List is Empty");
    }

    if (w->data == x)

    {

        snode = snode->rp;

        free(w);

        w = NULL;
    }

    while (w->data != x && w->rp != NULL)

    {

        w = w->rp;
    }

    if (w->data == x)

    {

        w->lp->rp = w->rp;

        w->rp->lp = w->lp;

        free(w);

        w = NULL;
    }

    display();
}
