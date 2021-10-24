//     check the array is sorted or not

#include<iostream>
using namespace std;

bool sorted(int arr[], int n)
{
    if (n==1)
    {
        return true;
    }
   
    bool restarr= sorted(arr+1 , n-1);  //aa ek var karvathi array 2,3,4,5,6 thai jay
    return (arr[0]<arr[1] &&restarr);
    
}

// ******** 2nd type *****************//

bool sort(int arr[], int n, int index)
{
    //traveller the entire array
    if (index >= arr[n-1])
    {
        return true;
    }
    if (arr[index]<arr[index-1])
    {
        return false;
    }

    return sort(arr,n, index+1);
    
    
}
int main()
{
    int arr[]={1,2,3,7,5,6};
    cout<<sorted(arr, 6)<<endl;

    bool ans= sort(arr,6, 1);
    if (ans==true)
    {
        cout<<"sorted array";
    }
    else{
        cout<<"unsorted array";
    }
    
}


// https://youtu.be/n23sJlCElko for better understanding