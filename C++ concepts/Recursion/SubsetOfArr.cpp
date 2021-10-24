#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void subset(vector<int>input,vector<int>output, int index)
{
    //sale element travers ho chuke ho//

    if (index==input.size())
    {
        //print the output array
        for(auto i : output) 
        {
            cout<<i<<" ";
        }

      /*    .......  also print like this ..........
      
         for (vector<int>::iterator i = output.begin(); i != output.end(); i++)
        {
            cout << *i << " ";
        }
        cout << endl;  */
        cout<<endl;
        return;
    }

    // nahi lena
    subset(input, output, index+1);
    // lena he
    output.push_back(input[index]);
     subset(input, output, index+1);
}

int main()
{
    int size;
    cin>>size;
    vector<int>vec(size);
    vector<int>subset1;  //to store subset
    for (int i = 0; i < size; i++)
    {
       cin>>vec[i];
    }

    subset(vec, subset1, 0 );

return 0;

}