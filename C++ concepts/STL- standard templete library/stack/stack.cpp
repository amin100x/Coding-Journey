#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>sta;
    sta.push(10);
    sta.push(20);
    sta.push(30);

	//top
	cout << "top element :-" << sta.top();

    //pop
	sta.pop();
	//10,20
	cout << endl << "New Top :-" << sta.top();

	//size: no of element present in stack
	cout << endl << "No. Of element:- " << sta.size();
	return 0;
}