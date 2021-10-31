#include <iostream>
using namespace std;

class queue
{
private:
    int front;
    int rear;
    int size;
    int *q;

public:
    queue()
    {
        size = 10;
        front = rear = 0;
        q = new int[size];
    }
    queue(int s)
    {
        size = s;
        front = rear = 0;
        q = new int[size];
    }
    void enqueue(int x)
    {
        if ((rear + 1) % size == front)
        {
            cout << "full";
        }
        else
        {
            rear = (rear + 1) % size;
            q[rear] = x;
        }
    }
    int dequeue()
    {
        int x = -1;
        if (front == rear)
        {
            cout << "Empty";
        }
        else
        {
            front = (front + 1) % size;
            x = q[front];
        }
        return x;
    }
    void display()
    {
        int i = front + 1;
        do
        {
            cout << q[i] << " ";
            i = (i + 1) % size;
        } while (i != (rear + 1) % size);
        cout << endl;
    }
};

int main()
{
    queue q(6);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
}