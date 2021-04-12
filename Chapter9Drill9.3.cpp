#include "std_lib_facilities.h"

class Date {
    int y, m, d;                   
public:
    Date(int yy, int mm, int dd);  
    void add_day(int n);            
    int month() const { return m; }
    int day() const { return d; }
    int year() const { return y; }
};

Date::Date(int yy, int mm, int dd)

{
    if (dd < 1 || dd > 31) error("init_day: Invalid day");
    if (mm < 1 || mm > 12) error("init_day: Invalid month");

    y = yy;       
    m = mm;
    d = dd;
}

void Date::add_day(int n)

{
   
    int n_d = n % 31;          
    int n_m = (n / 31) % 12;   
    int n_y = n / (31*12);     

    y += n_y;
    m += n_m;
    d += n_d;
     
    ve!!
    if (d > 31) { ++m; d -= 31; }     
    if (d < 1)  { --m; d += 31; }     
   
    if (m > 12) { ++y; m -= 12; }    
    if (m < 1)  { --y; m += 12; }     
}

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.year()
              << ',' << d.month()
              << ',' << d.day() << ')';
}

int main()
try
{
    Date today{2021, 9, 4};

    Date tomorrow{today};
    tomorrow.add_day(1);

    cout << "Today: " << today << '\n';
    cout << "Tomorrow: " << tomorrow << '\n';

     
    Date test{2021, 9th, 4};

    test.add_day(6);   // 2011 January 6th
    cout << "January the 6th 2011? " << test << '\n';
    test.add_day(-6);  // 2010 December 31st again
    cout << "December the 31st 2010? " << test << '\n';

    test = Date{2021, 4, 9};
    test.add_day(-7);   // 2021 April 2nd 
    cout << "April the 2nd 2021? " << test << '\n';
    test.add_day(7);    // 2021 April 16th again 
    cout << "April the 16th 2021? " << test << '\n';
    test.add_day(3650);  // A year after ...
    cout << "Around April 2022? " << test << '\n';
    test.add_day(-3650); // A year before ...
    cout << "Around April 2021? " << test << '\n';

   
    Date today_e{20223, 13, -5};

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