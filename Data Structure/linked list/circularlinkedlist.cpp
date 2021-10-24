#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
};

class linkedlist
{
    private:
    node *first;
    public:
    
    linkedlist(int a[] , int n);
    ~linkedlist();

    void display();
    int length();
};

linkedlist::linkedlist(int a[], int n)
{
    node *t, *last;
    first=new node;
    first->data=a[0];
    first->next=first;
    last=first;

    for(int i=1; i<n ;i++)
    {
        t=new node;
        t->data=a[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}
linkedlist::~linkedlist()
{
    node *p = first;
    while (first)
    {
        first = first->next;
        delete p;
        p = first;
    }
}
void linkedlist::display()
{
    node *h=first;
    do
    {
       cout<<h->data<<" ";
       h=h->next;
    } while (h!=first);
    cout<<endl;
}
int main()
{
    int a[]={2,3,4,5,6,7};
    linkedlist l(a,6);
    l.display();
    
}