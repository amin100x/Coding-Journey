#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{ //declaration
    std::multimap<int, string> mmap1;
    //initialization
    std::multimap<int, string> mmap2 = {{101, "amin"}, {102, "dhoni"}, {103, "smit"}, {103, "raina"}};

    //check

    for (multimap<int, string>::iterator i = mmap2.begin(); i != mmap2.end(); i++)
    {
        cout << i->first << " ";
        cout << i->second << endl;
    }
    cout << endl;
    //alter
    // mmap2[101] = "ABD";            // can't be done

    //insert:- insert key,value.
    //2 approach
    mmap2.insert(pair<int, string>(104, "Williamson"));
    mmap2.insert(make_pair(105, "stack"));

    for (multimap<int, string>::iterator i = mmap2.begin(); i != mmap2.end(); i++)
    {
        cout << i->first << " ";
        cout << i->second << endl;
    }
    cout << endl;
    //erase(): remove entry in map pointed by iterator
    multimap<int, string>::iterator del = mmap2.begin();
    mmap2.erase(del);

    //check
    for (map<int, string>::iterator i = mmap2.begin(); i != mmap2.end(); i++)
    {
        cout << i->first << " "; // for printing the map KEY

        cout << i->second << endl; // for printing Value - for string value
                                   //don't forget to include STRING header.
    }
    cout << endl;

    // swap
	// mmap1.swap(mmap2);

	//clear : Delete all the elements in multimap.

	//count : Return number of elements matching with given key.
	cout << "Count No of 103 : " << mmap2.count(103) << endl;

	// size : Returns the number of elements in the multimap.
	cout << "No of Elements : " << mmap2.size() << endl;
	return 0;

}