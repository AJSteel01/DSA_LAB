#include <iostream>
using namespace std;

struct queue
{

    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct queue *q)
{

    if (q->r == q->size - 1)
    {

        return 1;
    }

    return 0;
}

int isEmpty(struct queue *q)
{

    if (q->r == q->f)
    {

        return 1;
    }

    return 0;
}

int enqueue(struct queue *q, int val)
{

    if (isFull(q))
    {

        cout << "Qeueue size is maxed out " << endl;
    }

    q->r++;
    q->arr[q->r] = val;

    cout << "Enqueuing element : " << val << endl;
    return val;
}

int dequeue(struct queue *q)
{

    int a = -1;
    if (q->f == q->r)
    {

        cout << "Qeueue is Empty " << endl;
    }

    else
    {
        q->f++;
        a = q->arr[q->f];
    }

    return a;
}

int main()
{

    struct queue q;

    q.size = 3;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    //Enqueue few elements
    enqueue(&q, 12);
    enqueue(&q, 32);
    enqueue(&q, 56);
    cout << "dequing : " << dequeue(&q) << endl;
    cout << "dequing : " << dequeue(&q) << endl;
    cout << "dequing : " << dequeue(&q) << endl;

    if (isEmpty(&q))
    {

        cout << "Queue is empty" << endl;
    }
    if (isFull(&q))
    {

        cout << "Queue is Full" << endl;
    }
    return 0;
}