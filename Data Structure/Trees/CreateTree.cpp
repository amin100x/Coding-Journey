#include <iostream>
using namespace std;
#include <queue>

// Making Queue

struct node
{
    struct node *lchild;
    int data;
    struct node *rchild;
};

struct queuee
{
    int size;
    int front;
    int rear;
    struct node **Q;
};

void creatQ(struct queuee *q, int size)
{
    q->size = size;
    q->front = q->rear = 0;
    q->Q = new node *;
}

void enqueue(struct queuee *q, struct node *n)
{
    if ((q->rear + 1) % q->size == q->front)
    {
        printf("full");
    }
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = n;
    }
}
struct node *dequeue(struct queuee *q)
{
    struct node *x = NULL;
    if (q->front == q->rear)
        printf("Queue is Empty\n");
    else
    {
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front];
    }
    return x;
}
int isEmpty(struct queuee q)
{
    return q.front == q.rear;
}

// Treeeeeeeeeeeeeeeeee

struct node *root = NULL;
void treecreate()
{
    struct node *p, *t;
    int x;
    struct queuee q;
    creatQ(&q, 100);

    cout << "Enter a root value :- ";
    cin >> x;
    root = new node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q, root);

    while (!isEmpty(q))
    {
        p = dequeue(&q);
        cout << "enter left of " << p->data<<" :- ";
        cin >> x;
        if (x != -1)
        {
            t = new node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q, t);
        }

        cout << "enter right of " << p->data<<" :- ";
        cin >> x;
        if (x != -1)
        {
            t = new node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q, t);
        }
    }
}
void Preorder(struct node *p)
{
if(p)
{
cout<<p->data<<" ";
Preorder(p->lchild);
Preorder(p->rchild);
}
}

int main()
{
treecreate();
Preorder(root);
return 0;
}