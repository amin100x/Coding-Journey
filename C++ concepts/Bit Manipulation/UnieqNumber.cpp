#include<iostream>
using namespace std;

int Unique(int arr[], int n)
{
    int xorsum=0;
    for (int i = 0; i < n; i++)
    {
        xorsum= xorsum^arr[i];
    }
    return xorsum;
}
int main()
{
int arr[9]={1,2,3,4,10,4,3,2,1};
cout<<Unique(arr, 9);
}

// what this if dont understand https://youtu.be/SpMwf4CIy4k