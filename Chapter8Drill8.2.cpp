#include "std_lib_facilities.h"

namespace W {
int var {0};
void print() { cout << "W::var value is " << var << '\n'; }
} 

namespace U {
int var {0};
void print() { cout << "U::var value is " << var << '\n'; }
} 

namespace Z
{
int var {0};
void print() { cout << "Z::var value is " << var << '\n'; }
} 

int main()
{
    W::var = 14;
    W::print();    
    using namespace U;
    var = 18;
    print();       
    {
        using Z::var;
        using Z::print;
        var = 22;
        print();    
    }
    print();        
    W::print();     
}