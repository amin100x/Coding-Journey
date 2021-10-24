#include <iostream>
#include <list>
using namespace std;

int main()
{
    std::list<int> l1; //declaration

    std::list<int> l2 = {10, 20, 30}; //initialization

    //methods

    //insert
    list<int>::iterator i = l2.end();
    l2.insert(i, 40);

    for (list<int>::iterator i = l2.begin(); i != l2.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    //push_back
    l2.push_back(50);

    //push_front
    l2.push_front(5);

    for (list<int>::iterator i = l2.begin(); i != l2.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    //pop back
    l2.pop_back();
    //pop front
    l2.pop_front();

    for (list<int>::iterator i = l2.begin(); i != l2.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    //reverse

    l2.reverse();

    for (list<int>::iterator i = l2.begin(); i != l2.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    //swap
    l2.swap(l1);

    //size
    cout << l1.size();

    //sort
    l1.sort();

    //merge
    l1.merge(l2);
}