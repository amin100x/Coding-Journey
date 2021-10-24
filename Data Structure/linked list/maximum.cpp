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
    struct node *t, *last;
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
int max(struct node *p)
{
    int m = INT16_MIN;
    while (p)
    {
        if (p->data > m)
        {
            m = p->data;
        }
        p = p->next;
    }
    return m;
}

int maxRecur(struct node *p)
{
    int x=0;
    if (p==NULL)
    {
        return INT16_MIN;
    }

    x=maxRecur(p->next);
    return x>p->data ? x : p->data;  //same as above code   (it is turnary operator)
    // else
    // {
    //     x=max(p->next);
    //     if (x> p->data)
    //     {
    //        return x;
    //     }
    //     else{
    //         return p->data;
    //     }
    // }
    
}
int main()
{
    int arr[] = {2, 45, 6, 8, 9, 6, 8};
    create(arr, 7);
    cout << max(first) << endl;
    cout << maxRecur(first) << endl;
}