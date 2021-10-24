#include<iostream>
using namespace std;

void towerOfHanoi(int n, char srs, char des, char helper)
{
    if (n==0)
    {
        return;
    }
    
    towerOfHanoi(n-1, srs, helper, des);
    cout<<"Move from "<<srs<<" To "<<des<<endl;
    towerOfHanoi(n-1, helper, des, srs);
}
int main()
{
    towerOfHanoi(3,'A', 'C', 'B');
}