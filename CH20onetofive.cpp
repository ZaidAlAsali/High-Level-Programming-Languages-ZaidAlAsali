#include"std_lib_facilities.h"
int main()
{
	// array of ints
	int intArray[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	// vector of ints
	vector<int> intVector{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	// list of ints
	list<int> intList{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	// copies
	int intArray2[10];
	copy(begin(intArray), end(intArray), begin(intArray2));

	vector<int> intVector2 = intVector;

	list<int> intList2 = intList;

	// increase values
	for (int& i : intArray)
		i += 2;

	for (int& i : intVector)
		i += 3;

	for (int& i : intList)
		i += 5;

	keep_window_open();
	return 0;
}

