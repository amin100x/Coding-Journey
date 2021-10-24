#include<iostream>
using namespace std;

bool IsPowerOf2(int n)
{
    return (n && !(n & n-1));   /* here we write ! because if (n & n-1) is 0 then we get 
    what we need therefore we use ! to make it 1  
    and u do n && because if n=0 then this expretion became 0 */


}
int main()
{
    cout<<IsPowerOf2(18);
}