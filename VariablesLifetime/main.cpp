#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;

int global_var1{23}; // global variable

void some_function()
{
     int local_var{10};
     cout << "Inside function global_var: "
          << global_var1 << endl;
     cout << "Inside function local_var: "
          << local_var << endl;
}


int main()
{
     cout << "Inside function global_var: "
          << global_var1 << endl;
     return 0;
}
