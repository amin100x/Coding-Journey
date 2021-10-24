#include<iostream>
using namespace std;

struct array
{
int a[10];
int size;
int length;
};

void display(struct array arr)
{
    for(int i=0 ; i<arr.length ; i++)
    {
        cout<<arr.a[i]<<" ";
    }
}
int IsSorted(struct array arr)
{
    for(int i=0 ; i<arr.length-1 ; i++)
    {
        if (arr.a[i]>arr.a[i+1])
        {
            return 0;
        }
    }
     return 1;
}

int main()
{
    struct array arr1{{1,2,3,4,5,6,7,8,9} , 10, 9};
    cout<<IsSorted(arr1)<<endl;
    display(arr1);
}