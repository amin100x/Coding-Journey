#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "default of base" << endl;
    }
    base(int n)
    {
        cout << "para of base " << n<<endl;
    }
};

class derived:  public base
{
    public:
       derived() :base()
    {
        cout << "default of derived" << endl;
    }
    derived(int n) : base(n)
    {
        cout << "para of derived " << n;
    }
};

int main()
{
    derived a;
    derived n(9);
}