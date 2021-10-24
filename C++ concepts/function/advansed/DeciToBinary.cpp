#include <iostream>
using namespace std;

int DeciToBinary(int num)
{
    int binary=0;
    int i=1;
     while (num>0)
     {
         binary+= (num%2)*i;
         i*=10;
         num/=2;
         
     }
     return binary;
}
int main()
{
    int n;
    cin>>n;
    cout<<DeciToBinary(n);
    return 0;
}