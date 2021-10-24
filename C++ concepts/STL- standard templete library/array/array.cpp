
/*
Define Array:-
Arrays are fixed-size sequence containers
Therefore, they cannot be expanded or contracted dynamically*/

/*
properties:-
1. Sequence:- Elements in container follow strict linear sequence.
			  Individual elements are accessed by their position 
			  in this sequence.

2. Contiguous storage:- The elements are stored in contiguous memory
						locations.

3. Fixed-size aggregate:- The container uses implicit constructors 
						and destructors to allocate the required space.
						i) Explicitly Constructor call
						test obj = test(10);

						ii) Implicitly Constructor call
						test obj(10);
*/
#include <iostream>
#include <array>
using namespace std;

int main()
{
    std::array < int, 3 > arr1; //array declaration

    std::array<int, 3> arr2 = {10, 20, 30}; //array intialization

    //methods
    cout<<"At" << arr2.at(2)<<endl;  //out of bound safe

    cout<<"[] " <<arr2[2]<<endl;  //unsafe

    cout << "front() " << arr2.front() << endl;  //  return 1st element

    cout << "back() " << arr2.back() << endl;  // return last element 

	arr1.fill(0);							  // fill array with 0

	arr1.swap(arr2);					// swap arrays

	arr1.empty();  							// empty the array

	cout << "size() " << arr2.size() << endl;  // size of array filled

	cout << "max_size() " << arr2.max_size() << endl; // max size of array

	return 0;
}