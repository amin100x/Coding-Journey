#include <iostream>
#include <string>
using namespace std;

template <class t>
class sum
{
private:
    t x;
    t y;

public:
    sum(t arg1, t arg2)
    {
        x = arg1;
        y = arg2;
    }
    void getsum()
    {
        cout << x + y << endl;
    }
};

int main()
{
    sum<int> obj1(10, 20);
    sum<float> obj2(4.5, 5.6);
    sum<string> obj3("Vedinesh ", "Academy");

    obj1.getsum();
    obj2.getsum();
    obj3.getsum();
    return 0;
}