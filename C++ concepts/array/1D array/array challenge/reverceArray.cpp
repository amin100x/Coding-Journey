#include<iostream>
using namespace std;

void reverse( int arr[], int n)
{
    int *b = new int[n];
    int i,j;
    for(i=n-1 , j=0 ; i>=0 ; i--, j++)
    {
        b[j]=arr[i];
    }
    for(i=0 ; i<n ; i++)
    {
        cout<<b[i]<<endl;
    }
}
int main()
{
    int a[6]={2,3,4,5,3,2};
reverse(a,6);
}