#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int size;
    int top;

public:
    Stack(int x)
    {
        size = x;
        top = -1;
        arr = new int[size];
    }

    void push(int x)
    {
        if (top == size - 1)
        {
            cout << "stack overflow";
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Empty";
            return;
        }
        top--;
    }
    int topp()
    {
        if (top == -1)
        {
            cout << "No element";
            return -1;
        }
        return arr[top];
    }
    int peek(int index)
    {
        int x=-1;
        if (index<0 || index> top)
        {
            cout<<"invalid index";
        }
        else
        {
            x=arr[top-index+1];
        }
        return x;
    }
    void display()
    {
        for(int i=top ; i>=0; i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Stack st(10);
    st.push(23);
    st.push(232);
    st.push(22);
    st.push(202);
    st.push(2);

    // st.pop();
    // cout<< st.peek(3)<<endl;
    // cout << st.topp();

    st.display();
}