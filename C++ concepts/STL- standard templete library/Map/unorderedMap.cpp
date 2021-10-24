#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main()
{
    unordered_map<int, string> umap1;  
    unordered_map<int, string> umap2= {{102, "amin"}, {103, "dhoni"}, {103,"smith"}};  

for (unordered_map<int, string>::iterator i = umap2.begin(); i != umap2.end(); i++)
	{
		cout << i->first << " ";
		cout << i->second << endl;
	}
	cout << endl;

    //alter
	umap2[103] = "Kevin";
    
	cout << endl << "value at(103) " << umap2.at(103);
	cout << endl << "value [103] " << umap2[103] << endl << endl;

    //insert:- insert key,value.
	//2 approach
	umap2.insert(pair<int, string>(106, "Amit"));

	umap2.insert(make_pair(208, "Hina"));

	//check
	for (unordered_map<int, string>::iterator i = umap2.begin(); i != umap2.end(); i++)
	{
		cout << i->first << " ";   // for printing the map KEY

		cout << i->second << endl;   // for printing Value - for string value
									 //don't forget to include STRING header.
	}
	cout << endl;

    //erase(): remove entry in map pointed by iterator
	unordered_map<int, string>::iterator del = umap2.begin();
	umap2.erase(del);

	//check
	for (unordered_map<int, string>::iterator i = umap2.begin(); i != umap2.end(); i++)
	{
		cout << i->first << " ";   // for printing the map KEY

		cout << i->second << endl;   // for printing Value - for string value
									 //don't forget to include STRING header.
	}
	cout << endl;

	// swap
	// mmap1.swap(mmap2);

	//clear : Delete all the elements in unordered_map.

	//count : Return number of elements matching with given key.
	cout << "Count No of 103 : " << umap2.count(103) << endl;

	// size : Returns the number of elements in the unordered_map.
	cout << "No of Elements : " << umap2.size() << endl;
	return 0;
}


	