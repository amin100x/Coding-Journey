#include <iostream>
#include <string>
using namespace std;

template <class t>
t sum(t x, t y)
{
    return x + y;
}

int main()
{

    cout << sum<int>(3, 7) << endl;
    cout << sum<double>(3.0, 7.0) << endl;
    cout << sum<float>(3.4f, 9.5f) << endl;
    cout << sum<string>("Vedinesh ", "Academy") << endl;
    return 0;
}