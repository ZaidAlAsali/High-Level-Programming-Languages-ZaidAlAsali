#include "std_lib_facilities.h"
int ga[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
void f(int a[], int n)
{
	// 3a
	int la[10];
	// 3b
	for (int i = 0; i < n; ++i)
		la[i] = ga[i];

	// 3c
	for (int i = 0; i < n; ++i)
		cout << la[i] << ", ";
	cout << endl;

	// 3d
	int *p = new int[n];
	// 3e
	memcpy(p, a, n*sizeof(int));
	// 3f
	for (int i = 0; i < n; ++i)
		cout << p[i] << ", ";
	cout << endl;

	// 3g
	delete[] p;
}
int fac(int n)
{
	return n > 1 ? n*(fac(n - 1)) : 1;
}
int main()
{
	// 4a
	f(ga, 10);

	// 4b
	int aa[10] {1, fac(2), fac(3), fac(4), fac(5), fac(6), fac(7), fac(8), fac(9), fac(10) };

	// 4c
	f(aa, 10);

	keep_window_open();
	return 0;
}