#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;

int main()
{

    const int COLUMN_WIDTH{20};
    cout << endl;
    cout << "Compound bitwise assignment operators" << endl;
    unsigned char sandbox_var1{0b00110100};

    // Print out initial value
    cout << endl;
    cout << "Initial value" << endl;
    cout << setw(COLUMN_WIDTH) << "sandbox_var1: " << endl;
    cout << setw(COLUMN_WIDTH) << bitset<8>(sandbox_var1) << endl;
    cout << endl;

    // Compound Left shift
    cout << endl;
    cout << "Shift left 2 bit positions in place: " << endl;
    sandbox_var1 <<= 2;

    cout << setw(COLUMN_WIDTH) << "sandbox:var1: " << endl;
    cout << setw(COLUMN_WIDTH) << bitset<8>(sandbox_var1) << endl;
    cout << endl;

    // Compound right shift

    cout << endl;
    cout << "Shift right 4 bit positions in place: " << endl;
    sandbox_var1 >>= 4;
    cout << setw(COLUMN_WIDTH) << "sandbox:var1: " << endl;
    cout << setw(COLUMN_WIDTH) << bitset<8>(sandbox_var1) << endl;
    cout << endl;

    // Compund OR with 0000 0010 to have all lower 4 bits turned on

    cout << endl;
    cout << "Compund OR with 0000 0010: " << endl;
    sandbox_var1 |= 0b00000010;
    cout << setw(COLUMN_WIDTH) << "sandbox:var1: " << endl;
    cout << setw(COLUMN_WIDTH) << bitset<8>(sandbox_var1) << endl;
    cout << endl;

    // Compund AND with 0000 1100 to have all lower 4 bits turned on

    cout << endl;
    cout << "Compund AND with 0000 1100: " << endl;
    sandbox_var1 &= 0b000000000;
    cout << setw(COLUMN_WIDTH) << "sandbox:var1: " << endl;
    cout << setw(COLUMN_WIDTH) << bitset<8>(sandbox_var1) << endl;
    cout << endl;

    // XOR with 0000 0011 to have all lower 4 bits turned on

    cout << endl;
    cout << "XOR with 0000 0011: " << endl;
    sandbox_var1 ^= 0b00000011;
    cout << setw(COLUMN_WIDTH) << "sandbox:var1: " << endl;
    cout << setw(COLUMN_WIDTH) << bitset<8>(sandbox_var1) << endl;
    cout << endl;

    return 0;
}