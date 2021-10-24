#include <iostream>
using namespace std;

class car
{
private:
    int weight;

public:
    void setweight(int w)
    {
        weight = w;
    }
    int getweight()
    {
        return weight;
    }
};

class BMW
{
private:
    int topspeed;
    car *ptr;
public:
BMW(int wight=0, int topspd=0)
{
ptr = new car;
ptr->setweight(wight);
topspeed= topspd;
}
int getweight()
{
  return  ptr->getweight();
}
int  gettopspeed()
{
    return topspeed;
}
~BMW()
{
    delete ptr;
}
};

int main()
{
    BMW b(3000, 250);
    cout<<b.getweight<<endl;
    cout<<"topspeed "<< b.gettopspeed<<endl;
}