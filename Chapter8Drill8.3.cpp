#include "std_lib_facilities.h"

void swap_v(int z, int y)
{
    int temp;
    temp = z;
    z = y ;
    y = temp;
}

void swap_r(int& z, int& y)
{
    int temp;
    temp = z;
    z = y;
    y = temp;
}

}

int main()
{
    int z = 14;
    int y = 18;
    


    const int cz = 14;
    const int cy = 18;


    cout << "cz is now " << cz << " and cy is now " << cy << '\n';

    double dz = 14;
    double dy = 18;


    cout << "dz is now " << dz << " and dy is now " << dy << '\n';

    return 0;
}