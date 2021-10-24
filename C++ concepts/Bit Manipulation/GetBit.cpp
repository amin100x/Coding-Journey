
// first clear left shift and right shift operetor

#include<iostream>
using namespace std;

// ........... Rit- 1 ...........//
int getBit(int n, int pos)
{
return ((n >> pos)&1);             
}

// ........... Rit-2 .............//

int getbit1(int n, int pos)
{
return ((n &(1<< pos))!=0);
}

int main()
{
    cout<<getBit(5, 2)<<endl;
    cout<<getbit1(5, 2);

}