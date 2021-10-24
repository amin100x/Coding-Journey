#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node
{
int data;
struct node *next;
};

void linedlistTravarsal(struct node *ptr)
{
    while (ptr!= NULL)
    {
        printf("%d\n", ptr->data);
        ptr= ptr->next;
    }
    
}
int main()
{
    struct node *head;
    struct node *seconud;
    struct node *third;
    struct node *forth;

    head= new node;
    seconud = new node;
    third = new node; 
    forth= new node;

    head ->data= 7;
    head ->next= seconud;

    seconud -> data= 10;
    seconud -> next= third;

    third -> data= 12;
    third -> next= forth;

    forth -> data= 15;
    forth -> next = NULL;

    linedlistTravarsal(head);

    return 0;
}