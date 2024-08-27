#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;


// This code is to check if a number is odd or even
int main()
{
int value;
cout << "Give me a number: " << endl;
cin >> value;

if (value % 2 != 0) {
     cout << "Your value " << value << " is odd" << endl;
} else {
     cout << "Your value " << value << " is even" << endl;
}

return 0;
  
}