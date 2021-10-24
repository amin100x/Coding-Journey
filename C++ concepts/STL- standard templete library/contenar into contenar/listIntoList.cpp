#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l = {5, 6, 7};
    list<list<int>> ll = {{1, 2, 3}, {4, 5, 6}};

    //push_back : push 'l' list at the end of 'll' list.
    ll.push_back(l);

    //check

for(list<list<int>>::iterator i= ll.begin() ; i!=ll.end(); i++)
{
    list<int> pi= *i;

    for(list<int>::iterator j= pi.begin(); j!=pi.end(); j++)
    {
        cout<<*j<<" ";
    }
    cout<<endl;
}



}