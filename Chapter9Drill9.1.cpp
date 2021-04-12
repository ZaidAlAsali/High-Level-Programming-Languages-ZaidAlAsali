#include "std_lib_facilities.h"

struct Date {
    int y;      // This will represent the Year
    int m;      // This will represent the Months
    int d;      // This will represent which day in the month
};

void init_day(Date& dd, int y, int m, int d)
// This will basically check for invalid days and months
{
    if (d < 1 || d > 31) error("init_day: Invalid day");
    if (m < 1 || m > 12) error("init_day: Invalid month");

    dd.y = y;       
    dd.m = m;
    dd.d = d;
}

void add_day(Date& dd, int n)

{
    dd.d += n;
     
   
    if (dd.d > 31) { ++dd.m; dd.d -= 31; }    
    if (dd.d < 1)  { --dd.m; dd.d += 31; }    
  
    if (dd.m > 12) { ++dd.y; dd.m -= 12; }    
    if (dd.m < 1)  { --dd.y; dd.m += 12; }     
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
    Date today;
    init_day(today, 2021, 4, 9);

    Date tomorrow{today};
    add_day(tomorrow, 1);

    cout << "Today: " << today << '\n';
    cout << "Tomorrow: " << tomorrow << '\n';

    
    Date test;

    init_day(test, 2020, 12, 31);
    add_day(test, 6);   // 2021 January 6th
    cout << "January the 6th 2021? " << test << '\n';
    add_day(test, -6);  // 2019 December 31st again
    cout << "December the 31st 2019? " << test << '\n';

    init_day(test, 2021, 4, 8);
    add_day(test, -7);   // 2021 April 1st 
    cout << "April the 1st 2021? " << test << '\n';
    add_day(test, 7);  // 2021 april 15th again 
    cout << "April the 15th 2021? " << test << '\n';

   
    Date today_e;
    init_day(today_e, 2021, 16, -9);

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