#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};
class queuee
{
private:
    node *front;
    node *rear;

public:
    queuee()
    {
        front = NULL;
        rear = NULL;
    }

    void enqueue(int x)
    {
        node *t = new node;
        if (t == NULL)
        {
            cout << "Queue is full";
        }
        else
        {
            t->data = x;
            t->next = NULL;
            if (front == NULL)
            {
                front = rear = t;
            }
            else
            {
                rear->next = t;
                rear = t;
            }
        }
    }

    int dequeue()
    {
        int x = -1;
        node *p;
        if (front == NULL)
        {
            cout << "Empty queue";
        }
        else
        {
            x = front->data;
            p = front;
            front = front->next;
            delete p;
        }
        return x;
    }
    void display()
    {
        node *t = front;
        while (t)
        {
            cout << t->data << " ";
            t = t->next;
        }
        cout << endl;
    }
};

int main()
{
    queuee a;
    a.enqueue(10);
    a.enqueue(20);
    a.enqueue(30);
    a.enqueue(40);
    a.dequeue()
        a.display();
}