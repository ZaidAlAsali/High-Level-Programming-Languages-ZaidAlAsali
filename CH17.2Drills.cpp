#include "std_lib_facilities.h"

void print_array(ostream& os, int* a, int n)
{
	for(int i=0; i<n; i++)
		os << a[i] << endl;
}


int main ()
{
	// Q 1 Allocate an int, initialize it to 7, and assign its address to a variable p1.
	int n = 7;
	int* p1 = &n;
 
	// Q 2 Print out the value of p1 and of the int it points to.

	cout << "p1: " << p1 << " " << " n: " << n << endl ;

	// Q 3 Allocate an array of seven ints; initialize it to 1, 2, 4, 8, etc.; and assign its address to a variable p2.

	int seven_i [7] {1, 2, 4, 8, 10, 12, 14};
	int* p2 = seven_i;

	// Q 4 Print out the value of p2 and of the array it points to.

	cout << p2 << endl;
	print_array (cout, p2, 7);


	//Q 5 Declare an int* called p3 and initialize it with p2.

	int* p3 = p2;

	// Q 6 Assign p1 to p2.

	p1 = p2;

	// Q 7 Assign p3 to p2.

	p3 = p2;

	//Q 8 Print out the values of p1 and p2 and of what they point to.

	cout << "p1"  << ' ' << p1 <<" it points to " << *p1 << endl;  // p1 points to first value in the array
	print_array (cout, p2, 7);

	// Q 9 we didn't use any free space we used int which is in the stack so there is nothing to deallocate.


	// Q 10  Allocate an array of ten ints; initialize it to 1, 2, 4, 8, etc.; and assign its address to a variable p1.

	int ten_i [10] {1, 2, 4, 8, 10, 12, 14, 16, 18, 212};
	p1 = ten_i;

	//Q 11  Allocate an array of ten ints, and assign its address to a variable p2.

	int ten2_i [10] {1, 2, 4, 8, 10, 12, 14, 16, 18, 500};
	p2 = ten2_i;

	// Q 12  Copy the values from the array pointed to by p1 into the array pointed to by p2.

	for (int i = 0; i<10; i++)
		p2[i] = p1[i];
			
			
	// Q 13 

	vector<int> v_ten_i{1, 2, 4, 8, 10, 12, 14, 16, 18, 212};
	p1 = &v_ten_i[0];
		
	vector<int> v_ten_i2 {1, 2, 4, 8, 10, 12, 14, 16, 18, 500};
	p2 = &v_ten_i2[0];
		

	for (int i = 0; i < 10; ++i)
		p2[i] = p1[i];

	return 0;
}