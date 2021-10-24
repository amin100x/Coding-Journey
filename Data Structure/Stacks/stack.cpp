#include <iostream>
using namespace std;

#define n 100
class stack
{
private:
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack overflow." << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "no element to pop" << endl;
            return;
        }
        top--;
    }
    int Topp()
    {
        if (top == -1)
        {
            cout << "No element in stack" << endl;
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        return top == -1;
    }

    int peek(int index)
    {
        int x=-1;
        if (top-index+1 <0)
        {
            cout<<"invalid index";
        }
        else
        {
            x=arr[top-index+1];
        }
        return x;
    }
};

int main()
{
    stack st;  //object
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.pop();
    cout<< st.Topp()<<endl;
    cout<<st.peek(2);
}