#include<iostream>
using namespace std;

int Updatebit(int n, int pos, int value)
{
    int mask = ~(1<< pos);
    n= n & mask;
    return (n | (value << pos));
}
int main()
{
    cout<<Updatebit(5,1,1);
    return 0;
}

//its not working in vs code but working on other compiler