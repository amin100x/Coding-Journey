#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q1;

    q1.push(10);
    q1.push(20);
    q1.push(30);

    cout<<"front element "<<q1.front()<<endl;
    cout<<"back element "<<q1.back()<<endl;

    q1.pop();

    cout<<"new front element "<<q1.front()<<endl;
    cout<<"size "<<q1.size();
}