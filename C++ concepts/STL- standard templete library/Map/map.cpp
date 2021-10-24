#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    std::map<int, string> map1; //declaration

    //intialization

    std::map<int, string> map2 = {{101, "amin"}, {102, "dhoni"}, {103, "raina"}};

    //insert
    map2[101] = "ABD";

    //CHEKC

    for (map<int, string>::iterator i = map2.begin(); i != map2.end(); i++)
    {
        cout << i->first << " ";
        cout << i->second << endl;
    }
    cout << endl;

    //at
    cout << "value at 102 " << map2.at(102) << endl; // get value by KEY  safe
                                                     //[]
    cout << "Value at 101:-" << map2[101] << endl;

    //change value
    map2.at(101) = "amin";
    cout << "Value at 101:-" << map2.at(101) << endl;

    //insert:- insert key,value at particular location as MAP is sorted.
    //2 approach
    map2.insert(pair<int, string>(104, "shami"));
    //................or...........
    map2.insert(make_pair(105, "smith"));

    for(map<int, string>::iterator i= map2.begin() ; i!=map2.end() ; i++)
    {
        cout<< i->first<<" ";
        cout<< i->second<<endl;
    }
    cout<<endl;

    //erase(): remove entry in map pointed by iterator

    map<int, string>::iterator i = map2.begin();
    map2.erase(i);

    for(map<int, string>::iterator i= map2.begin() ; i!=map2.end(); i++)
    {
        cout<< i->first<<" ";
        cout<< i->second<<endl;
    }
}