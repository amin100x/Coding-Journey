//Insering node at beginning

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head; //global variable can be accese anywhere

void Insert(int x)
{
    struct node *temp= (node *)malloc(sizeof(node));
    temp->data = x;
    temp->next = head;
    head = temp;
}

void print()
{
    struct node *temp=head;
    printf("List is: ");
    while (temp!= NULL)
    {
       printf("%d ", temp->data);
       temp = temp->next;
    }
    printf("\n");
}
int main()
{
    head = NULL; //empty list
    printf("How many number?");
    int n, i, x;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        Insert(x);
        print();
    }

    return 0;
}