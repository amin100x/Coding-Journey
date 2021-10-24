#include<iostream>
using namespace std;

class person
{
    private:
    int weight;
    public:
    person(int w=0)
    {
        weight=  w;
    }
    void print()
    {
cout<<weight;
    }
    void operator++()
    {
        ++weight;
    }
    void operator++(int)
    {
        weight++;
    }
};

int main()
{
person jon(78);
++jon;
jon++;
jon.print();
}