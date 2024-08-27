#include <iostream>
#include <bitset>
using namespace std;

int main()
{

    // This for operations shifting

    unsigned short int value{0xff0u};

    cout << "Size of the int: " << sizeof(short int) << endl;
    cout << "value: " << bitset<16>(value)
     << ", dec" << value << endl;

    // Shift left by 1 bit
     value = static_cast <unsigned short int>(value << 1);

     cout << "value: " << bitset<16>(value)
     << ", dec" << value << endl;

     // Shift left by 1 bit
     value = static_cast <unsigned short int>(value << 1);

     cout << "value: " << bitset<16>(value)
     << ", dec" << value << endl;

     // Shift left by 1 bit
     value = static_cast <unsigned short int>(value << 1);

     cout << "value: " << bitset<16>(value)
     << ", dec" << value << endl;

     // Shift left by 1 bit
     value = static_cast <unsigned short int>(value << 1);

     cout << "value: " << bitset<16>(value)
     << ", dec" << value << endl;

     //Shift Right by 1 bit

     value = static_cast <unsigned short int>(value >> 1);

     cout << "value: " << bitset<16>(value)
     << ", dec" << value << endl;

     //Shift Right by 1 bit

     value = static_cast <unsigned short int>(value >> 2);

     cout << "value: " << bitset<16>(value)
     << ", dec" << value << endl;

    // This operation was for printing values in Binary
    /*
    unsigned short int data {15};


    cout << "data (dec): " << showbase << dec << data << endl;
    cout << "data (oct): " << showbase << oct << data << endl;
    cout << "data (hex): " << showbase <<hex << data << endl;
    cout << "data (binary)" << bitset <16> (data) << endl;


    */

    return 0;
}