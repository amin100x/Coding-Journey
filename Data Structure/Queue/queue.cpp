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
        front = rear = -1;
        size = 10;
        q = new int[size];
    }
    queue(int s)
    {
        front=rear=-1;
        this->size=s;
        q=new int[s];
    }
    void enqueue(int x)
    {
        if (rear==front-1)
        {
            cout<<"queue full";
        }
        else
        {
            rear++;
            q[rear]=x;
        }
    }
    int dequeue()
    {
        int x=-1;
        if (rear==front)
        {
        cout<<"empty queue";
        }
        else
        {
            x=q[front+1];
            front++;
        }
        return x;
    }
    void display()
    {
        for(int i=front+1 ; i<=rear; i++)
        {
            cout<<q[i]<<" ";
        }
    }

};
int main()
{
    queue q(5);
    q.enqueue(10000);
    q.enqueue(9);
    q.enqueue(90);
    q.display();
}