//find first and last occurrence of an element using recursion

#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int i, int key)
{
    if (i==n)
    {
        return -1;
    }
    if (arr[i]==key)
    {
       return i;
    }
    return firstOcc(arr, n, i+1, key );
}

int lastOcc(int arr[], int n, int i, int key)
{
    if (i==n)
    {
        return -1;
    }
     return lastOcc(arr, n, i+1, key );
     if (arr[i]==key)
    {
       return i;
    }
    
}
int main()
{
int arr[]={1,2,3,4,5,2,6};
int key;
cin>>key;

cout<<firstOcc(arr,7,0,2 )<<endl;
cout<<lastOcc(arr,7,0,2 )<<endl;

}