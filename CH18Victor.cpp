#include "std_lib_facilities.h"
vector<int> gv = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
void f(vector<int>& v)
{
	// 3a
	vector<int> lv(10);

	// 3b
	lv = v;

	//3c
	for (int i : lv)
		cout << i << ", ";
	cout << endl;

	//3d
	vector<int> lv2 = v;

	// 3e
	for(int i : lv2)
		cout << i << ", ";
	cout << endl;
}
int fac(int n)
{
	return n > 1 ? n*(fac(n - 1)) : 1;
}
int main()
{
	// 4a
	f(gv);

	// 4b
	vector<int> vv = { 1, fac(2), fac(3), fac(4), fac(5), fac(6), fac(7), fac(8), fac(9), fac(10) };

	// 4c
	f(vv);

	keep_window_open();
	return 0;
}