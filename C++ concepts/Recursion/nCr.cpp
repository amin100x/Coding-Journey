//Analize Pascal diagram  nCr= (n-1)C(r-1) + (n-1)C(r)

#include<iostream>
using namespace std;

int ncr(int n, int r)
{
    if (r==0 || r==n)
    {
        return 1;
    }
    return ncr(n-1, r)+ncr(n-1, r-1);
}

int main()
{
    cout<<ncr(5,3);
}