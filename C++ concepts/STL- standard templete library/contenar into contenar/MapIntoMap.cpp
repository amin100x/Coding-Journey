#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, map<int, int>> m; //Map inside map

    //inserting values
    map<int, int> temp;
    //                    k  v
    temp.insert(make_pair(1, 2));
    //                 k   v
    m.insert(make_pair(0, temp));
    // k   k v
    //{0, {1,2}}
    //outer
    map<int, map<int, int>>::iterator i;
    //inner
    map<int, int>::iterator j;

    for (i = m.begin(); i != m.end(); i++)
    {
        for(j= i->second.begin(); j!= i->second.end(); j++)
        {
            cout << "Key 1: " << i->first << endl;
			cout << "Key 2: "<< j->first << endl;
			cout << "Value: " << j->second << endl;
        }
    }
}