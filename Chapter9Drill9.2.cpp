#include "std_lib_facilities.h"

struct Date {
    int y, m, d;                    // these will represent year, month, day
    Date(int yy, int mm, int dd);   // checks for validity
    void add_day(int n);            // increases the Date by n days
};

Date::Date(int yy, int mm, int dd).
{
    if (dd < 1 || dd > 31) error("init_day: Invalid day");
    if (mm < 1 || mm > 12) error("init_day: Invalid month");

    y = yy;       
    m = mm;
    d = dd;
}

void Date::add_day(int n)

{
    d += n;
     
   
    if (d > 31) { ++m; d -= 31; }   
    if (d < 1)  { --m; d += 31; }     

    if (m > 12) { ++y; m -= 12; }    
    if (m < 1)  { --y; m += 12; }    
}

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.y
              << ',' << d.m
              << ',' << d.d << ')';
}

int main()
try
{
    Date today{2021, 4, 9};

    Date tomorrow{today};
    tomorrow.add_day(1);

    cout << "Today: " << today << '\n';
    cout << "Tomorrow: " << tomorrow << '\n';

  
    Date test{2021, 4, 9};

    test.add_day(6);   // 2021 January 15th
    cout << "April the 15th 2021? " << test << '\n';
    test.add_day(-6);  // 2021 April 3rd again
    cout << "April the 3rd 2021? " << test << '\n';

    test = Date{2021, 4, 9};
    test.add_day(-7);   // 2021 april 16th 
    cout << "April the 16th 2021? " << test << '\n';
    test.add_day(7);    // 2021 april 2nd again 
    cout << "April the 2nd 2021? " << test << '\n';

    
    Date today_e{20021, 32, -6};

    return 0;
}
catch(exception& e)
{
    cerr << e.what() << '\n';
    return 1;
}
catch(...)
{
    cerr << "Unknown exception!!\n";
    return 2;
}