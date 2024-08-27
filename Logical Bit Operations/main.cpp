#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;

int main()
{

    int COLUMN_WIDTH {20};
    unsigned char value1 {0x3};
    unsigned char value2 {0x5};

    cout << setw(COLUMN_WIDTH) << "value1: " 
    << setw (COLUMN_WIDTH) << bitset<8>(value1) << endl;

    cout << setw(COLUMN_WIDTH) << "value2: " 
    << setw (COLUMN_WIDTH) << bitset<8>(value2) << endl;

    //AND

    cout << endl;
    cout << "Bitwise AND: " << endl;
    cout << setw(COLUMN_WIDTH) << "value1 & value2: " 
    << setw (COLUMN_WIDTH) << bitset<8>(value1 & value2) << endl;
    cout << endl;

    //OR

    cout << endl;
    cout << "Bitwise OR: " << endl;
    cout << setw(COLUMN_WIDTH) << "value1 | value2: " 
    << setw (COLUMN_WIDTH) << bitset<8>(value1 | value2) << endl;
    cout << endl;
    
    return 0;


}