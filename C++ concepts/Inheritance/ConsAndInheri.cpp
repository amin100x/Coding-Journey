#include <iostream>
using namespace std;

class base
{
public:
    base()    //constructor
    {
        cout << "default contructor of base"<<endl;
    }
    base(int n)    //constructor
    {
        cout << "para of base " << n;
    }
};

class derived : public base
{
    public:
     derived()
    {
        cout << "default contructor of derived";
    }
    
};
int main()
{
    derived n;
}

// from this code we cant asses para of base 
