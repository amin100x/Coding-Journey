//Jumps – Number of ways to reach destination: we can junp 1, 2 or 3 at a time

#include<iostream>
using namespace std;

int numberOfJump(int n)
{
if (n<0)
{
    return 0;
}
if (n==0)
{
    return 1;
}

return numberOfJump(n-1)+numberOfJump(n-2)+numberOfJump(n-3);

}

int main()
{
    cout<<"Enter number of n:- ";
    int n;
    cin>>n;
cout<<"Number of jumps:- ";
    cout<<numberOfJump(n);
}