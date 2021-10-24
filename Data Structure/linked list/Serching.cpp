#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *first = NULL;

void create(int a[], int n)
{
    struct node *last, *t;
    first = new node;
    first->data = a[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
struct node *search(struct node *p, int key)
{
    while (p)
    {
        if (key == p->data)
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

struct node *searchRecursiv(struct node *p , int key)
{
    if (p==NULL)
    {
      return NULL;
    }
    if (key==p->data)
    {
        return p;
    }
return searchRecursiv(p->next , key);
    
}
int main()
{
    int a[] = {2, 4, 6, 7, 8, 9, 7, 55};
    int key;
    cin >> key;
    create(a, 8);
    cout<<search(first, key)<<endl;
    cout<<searchRecursiv(first, key);
}