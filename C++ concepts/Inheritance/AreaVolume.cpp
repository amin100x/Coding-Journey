#include<iostream>
using namespace std;

class rectangle
{
    public:
    int lenght;
    int wedth;

void area()
{
    cout<<"area" <<lenght*wedth;
}
};
class cubuic : public rectangle
{
    public:
    int hight;

    void volume()
    {
        cout<<endl<<"volume "<<lenght*wedth*hight;
    }
};

int main()
{
    cubuic a;
    a.lenght=10, a.wedth= 20, a.hight=30;

    a.area();
    a.volume();
}
