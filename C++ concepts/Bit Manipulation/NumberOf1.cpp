#include<iostream>
using namespace std;

int NumberOF1(int n)
{
    int count=0;
    while (n)
    {
        n= n& (n-1);    // n&(n-1) karvathi 1 ni sankhya 1 ochhi thati jay etle n ne 00 thata jetli while loop chale etla 1 hase
        count++;
    }
    return count;
}
int main()
{
    cout<<NumberOF1(115);
}