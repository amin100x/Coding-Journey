#include <iostream>
#include <vector>
using namespace std;

int main()
{
    std::vector<int> vec1; //declaration
    cout << "Size " << vec1.size() << endl;

    std::vector<int> vec2 = {10, 20, 30}; //intialization

    //methods

    cout << "At " << vec2.at(2) << endl; //out of bound safe
    cout << "[] " << vec2[2] << endl;    //unsafe

    //inserting an element at the end of the vector

    vec2.push_back(40);
    vec2.push_back(50);
    vec2.push_back(60);

    //iterator is pointer to container

    for (vector<int>::iterator i = vec2.begin(); i != vec2.end(); i++)
    {
        cout << *i << " "; //iterator is pointer to container
    }
    cout << endl;

    //pop out last element

    vec2.pop_back();
    vec2.pop_back();

    for (vector<int>::iterator i = vec2.begin(); i != vec2.end(); i++)
    {
        cout << *i << " "; //iterator is pointer to container
    }
    cout << endl;
    //insert:- inserts the element in vector before the position pointed
    //by iterator

    vector<int>::iterator i = vec2.begin();
    vec2.insert(i, 100);

    for (vector<int>::iterator i = vec2.begin(); i != vec2.end(); i++)
    {
        cout << *i << " "; //iterator is pointer to container
    }
    cout<<endl;

    //erase:- removes the element pointed by the iterator.

    vector<int>::iterator j=vec2.begin();
    vec2.erase(j);

    for ( vector<int>::iterator i= vec2.begin() ; i!=vec2.end(); i++)
    {
        cout<< *i <<" ";
    }
    cout<<endl;

    //erase all element except last element

    vec2.erase(vec2.begin(), vec2.end()-1);
    for ( vector<int>::iterator i= vec2.begin() ; i!=vec2.end(); i++)
    {
        cout<< *i <<" ";
    }
    cout<<endl;

    //swap: interchanges value of two vectors
	vec2.swap(vec1);

    
	//capacity :number of elements that can be inserted 
	//in the vector based on the memory allocated to the vector
	cout << endl << "Capacity " << vec1.capacity() << endl;
	return 0;
}