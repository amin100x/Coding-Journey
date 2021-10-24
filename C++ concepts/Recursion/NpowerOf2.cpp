#include<iostream>
using namespace std;

int exp(int n, int power)
{
    if (power==0)
    {
        return 1;
    }
    return n * exp(n, power-1); 
}

//********************** For very low time com ***  best solu.  **********//logn
int exp1(int n, int power)
{
    if (power==0)
    {
        return 1;
    }
    int chota_ans = exp1(n, power/2);
    if (power%2==1)   // odd number (eki)
    {
        return n*chota_ans*chota_ans;
    }
    else 
    {
        return chota_ans*chota_ans;
    }
 
}


int main()
{
    int n, power;
    cin>>n>>power;
    cout<<exp(n, power);
    cout<<exp1(n, power);
    
}

