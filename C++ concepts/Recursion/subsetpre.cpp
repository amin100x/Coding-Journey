#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void subset(vector<int> input, vector<int> output, int index)
{
    if (index == input.size())
    {
        for (vector<int>::iterator i = output.begin(); i != output.end(); i++)
        {
            cout << *i << " ";
        }
        cout << endl;
        return;
    }

    //nahi lena
    subset(input, output, index + 1);
    //lena he
    output.push_back(input[index]);
    subset(input, output, index + 1);
}
int main()
{
    int size;
    cin >> size;
    vector<int> in(size);
    vector<int> out;
    for (int i = 0; i < size; i++)
    {
        cin >> in[i];
    }

    subset(in, out, 0);
}