#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> myvec ={40,50,60};

    vector<vector<int>> vec1= {{15,25,35},{10,20,30}, {70,80,90}};    //vector inside vector

    //push_back()

    vec1.push_back(myvec);            // push elements at end of vector

    //print

    for (int i = 0; i < vec1.size(); i++)
    {
        for (int j = 0; j < vec1[i].size(); j++)
        {
            cout << vec1[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<endl;
    	//pop_back  : remove last element from row 
	vec1[0].pop_back();
	vec1[1].pop_back();
	vec1[2].pop_back();
	vec1[3].pop_back();

    for (int i = 0; i < vec1.size(); i++)
    {
        for (int j = 0; j < vec1[i].size(); j++)
        {
            cout << vec1[i][j] << " ";
        }
        cout<<endl;
    }
}