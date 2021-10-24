// Stack Implementation using Linked List
#include <bits/stdc++.h>
using namespace std;

class stackNode
{
public:
	int data;
	stackNode *next;
};
class Stack
{
public:
	stackNode *top;
	Stack()
	{
		top = NULL;
	}
	void push(int val);
	int pop();
	bool isEmpty();
	int peek();
	stackNode *newNode(int val);
};
stackNode *Stack::newNode(int val)
{
	stackNode *ptr = new stackNode;
	ptr->data = val;
	ptr->next = NULL;
	return ptr;
}
void Stack::push(int val)
{
	stackNode *ptr = newNode(val);
	ptr->next = top;
	top = ptr;
}
bool Stack::isEmpty()
{
	if (top == NULL)
		return true;
	else
		return false;
}
int Stack::peek()
{
	if (isEmpty())
	{
		return INT_MIN;
	}
	return top->data;
}
int Stack::pop()
{
	if (isEmpty())
	{
		cout << "\nNo Element to pop";
		return INT_MIN;
	}
	stackNode *temp = top;
	top = top->next;
	int popped = temp->data;
	free(temp);
	return popped;
}
int main()
{

	Stack st;
	st.push(3);
	st.push(2);
	st.push(1);
	st.push(18);
	cout << st.peek() << endl;
	st.pop();
	st.pop();
	st.pop();
	cout << st.peek() << endl;
	st.pop();
	cout << st.peek();

	return 0;
}