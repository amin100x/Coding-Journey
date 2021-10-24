#include <iostream>
#include <queue>
using namespace std;

int main()
{
    //********************************* create a max heap
    priority_queue<int> p1;
    //push value

    p1.push(20);
    p1.push(40);
    p1.push(30);

    //20,40,30
    //40,30,20 - Will be arranged in Descending Order

    cout << "top elemet " << p1.top();

    //pop
	p1.pop();
	cout << endl << "New Top element :-" << p1.top();

    //size: no of element present in queue
	cout << endl << "No. Of element:- " << p1.size()<<endl;

     //********************************* create a min heap

     priority_queue<int , vector<int>, greater<int> > p2;

    //push value

    p2.push(20);
    p2.push(40);
    p2.push(30);

    //20,40,30
    //20,30,40 - Will be arranged in Descending Order

    cout <<endl<< "top elemet " << p2.top()<<endl;

    //pop
	p2.pop();
	cout  << "New Top element :-" << p2.top()<<endl;

    //size: no of element present in queue
	cout  << "No. Of element:- " << p2.size()<<endl;

}