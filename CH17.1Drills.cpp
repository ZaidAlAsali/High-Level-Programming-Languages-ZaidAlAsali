#include "std_lib_facilities.h"

// Q 4  Write a function print_array10(ostream& os, int* a) that prints out the values of a to os.

void print_array10(ostream& os, int* a)
{
	for(int i=0; i<10; i++)
		os << a[i] << endl;
	delete[] a;  // Q 9
	
}
// Q 6 Allocate an array of 11 ints on the free store; initialize it with the values 100, 101, 102, etc. And print out its values.

void print_array11(ostream& os, int* a)
{
	for(int i=0; i<11; i++)
		os << a[i] << endl;

	delete[] a; // Q 9
}

// Q 7 Write a function print_array(ostream& os, int* a, int n) that prints out the values of a to os.
void print_array(ostream& os, int* a, int n)
{
	for(int i=0; i<n; i++)
		os << a[i] << endl;
	delete[] a;  // Q 9
}


void printVector(vector<int> v)
{

	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << endl;
	//delete v[i];


}

vector<int> allocateVector(int n)
{
	vector<int> temp;
	int counter = 100;
	for (int i = 0; i < n; ++i)
		temp.push_back(counter++);
	
	return temp;
}


int main()
{
// Q 1 Allocate an array of ten ints on the free store using new.

	int* ten_i = new int[10];

	// Q 2 Print the values of the ten ints to cout.

	for(int i=0; i<10; i++)
	cout << ten_i[i] << endl;
	
	//Q 3 Deallocate the array (using delete[]).

	delete[] ten_i;
	
	// Q 4
	//print_array10(cout, ten_i);
	//delete[] ten_i;
	
	// Q 5 Allocate an array of ten ints on the free store; initialize it with the values 100, 101, 102, etc. And print out its values.

	int* ten_i2 = new int[10] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
	print_array10(cout, ten_i2);
	//delete[] ten_i2
	
	
	// Q 6 Allocate an array of 11 ints on the free store; initialize it with the values 100, 101, 102, etc. And print out its values.

	int* eleven_i = new int[11] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
	print_array11(cout, eleven_i);
	//delete[] eleven_i;
	
	// Q 8 Allocate an array of 20 ints on the free store; initialize it with the values 100, 101, 102, etc. And print out its values.

	int* twenty_i = new int[20] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119};
	print_array(cout, twenty_i, 20);
	//delete[] twenty_i ;
	
	// Q 10 Do 5, 6, and 8 using a vector instead of an array and a print_vector() instead of print_array().
	
	cout << "with Vector 10" << endl;
	vector<int> v_ten_i = allocateVector(10);
	printVector(v_ten_i);
	
	cout << "with Vector 11" << endl;
	vector<int> v_eleven_i = allocateVector(11);
	printVector(v_eleven_i);
	
	cout << "with Vector 20" << endl;
	vector<int> v_twenty_i = allocateVector(20);
	printVector(v_twenty_i);
	
	

return 0;
}