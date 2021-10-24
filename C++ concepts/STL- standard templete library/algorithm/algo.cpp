//STL Algorithms
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
	vector<int> myvec = { 40,50,20,10,30 };

	for (std::vector<int>::iterator i = myvec.begin(); i != myvec.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	//1. sort
	// Sorting the Vector in Ascending order
	sort(myvec.begin(), myvec.end());

	cout << "Sorted Vector :";
	for (std::vector<int>::iterator i = myvec.begin(); i != myvec.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;


	//reverse  
	reverse(myvec.begin(), myvec.end());
	cout << "Reversed Vector :";
	for (std::vector<int>::iterator i = myvec.begin(); i != myvec.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	//max element
	cout << "Max :" << *max_element(myvec.begin(), myvec.end()) << endl;

	//min element
	cout << "Min :" << *min_element(myvec.begin(), myvec.end()) << endl;

	//binary_search - search element
	
	if (binary_search(myvec.begin(), myvec.end(), 29))
		cout << "Element Found" << endl;
	else
		cout << "Not Found" << endl;

	//                     0  1  2  3  4  5  6  7
	vector<int> myvec2 = { 5,10,20,20,20,40,40,50 };
	// it returns an iterator to the upper bound of the given element in the given sorted range.
	vector<int>::iterator it1, it2;
	it1 = upper_bound(myvec2.begin(), myvec2.end(), 20);
	

	//it returns an iterator to the lower bound of the given element in the given sorted range.
	it2 = lower_bound(myvec2.begin(), myvec2.end(), 20); 

	//count
	cout << "No of 20 :" << count(myvec2.begin(), myvec2.end(), 20) << endl;
	/*

	//copy
	vector<int> myvec3;
	copy(myvec2.begin(), myvec2.end(), myvec3);

	//swap
	swap(myvec2, myvec3);

	//unique : removes the consecutive duplicate elements from the given range
	vector<int>::iterator it3;
	it3 = unique(myvec2.begin(), myvec2.end());

	*/

	return 0;
}