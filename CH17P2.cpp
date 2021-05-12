#include "std_lib_facilities.h"
void printArray(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		os << "Int " << i << ": " << *a << "	Addr: " << a << endl;
		++a;	// increment the address by int size
	}
}
int main()
{
	// drill 1
	int n = 7;
	int* p1 = &n;

	// drill 2
	cout << "n: " << n << "	p1: " << p1 << endl;
	
	// drill 3
	int sevenInts [7] = { 1,2,4,8,16,32,64 };
	int* p2 = sevenInts;

	// drill 4
	cout << "-----------------------------------" << endl;
	printArray(cout, p2, 7);
	cout << "p2: " << p2 << endl;

	// drill 5
	int* p3 = p2;

	// drill 6
	p2 = p1;

	// drill 7
	p2 = p3;

	// drill 8
	cout << "-----------------------------------" << endl;
	cout << "p1: " << p1 << "/" << *p1 << endl;
	printArray(cout, p2, 7);

	// drill 9
	// we haven't allocated anything to the free store, they are all local variables;
	// therefore they are allocated on the stack

	// drill 10
	int tenInts[10] = { 1,2,4,8,16,32,64,128,256,512 };
	p1 = tenInts;

	// drill 11
	int tenInts2[10] = { 10,20,40,80,160,320,640,1280,2560,5120 };
	p2 = tenInts2;

	// drill 12
	for (int i = 0; i < 10; ++i)
		p2[i] = p1[i];

	// drill 13
	vector<int> v_tenInts{ 1,2,4,8,16,32,64,128,256,512 };
	p1 = &v_tenInts[0];
	vector<int> v_tenInts2{ 10,20,40,80,160,320,640,1280,2560,5120 };
	p2 = &v_tenInts2[0];
	for (int i = 0; i < 10; ++i)
		p2[i] = p1[i];

	keep_window_open();
	return 0;
}
