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

int count(struct node *p)
{
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;
    }
    return l;
}

int countRecursively(struct node *p)
{
    if (p)
    {
        return countRecursively(p->next)+1;
    }
    else{
        return 0;
    }
}
int sum(struct node *p)
{
    int s=0;
    while (p)
    {
        s+=p->data;
        p=p->next;
    }
    return s;
}

int sumRecursion(struct node *p)
{
    if(p==NULL)
    {
        return 0;
    }
    else{
      return sumRecursion(p->next)+ p->data;  
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,8,9};
    create(arr, 8);
    cout<<count(first);
    cout<<endl<< countRecursively(first);
    cout<<endl<<sum(first);
    cout<<endl<<sumRecursion(first);
}