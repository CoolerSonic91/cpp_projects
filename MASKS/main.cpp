#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;

int main()
{

  const int COLUMN_WIDTH{20};
  // Highlight position for bit of interest with a 1
  // Mask other positions with 0

  const unsigned char mask_bit_0{0b00000001}; // Bit 0
  const unsigned char mask_bit_1{0b00000010}; // Bit 1
  const unsigned char mask_bit_2{0b00000100}; // Bit 2
  const unsigned char mask_bit_3{0b00001000}; // Bit 3
  const unsigned char mask_bit_4{0b00010000}; // Bit 4
  const unsigned char mask_bit_5{0b00100000}; // Bit 5
  const unsigned char mask_bit_6{0b01000000}; // Bit 6
  const unsigned char mask_bit_7{0b10000000}; // Bit 7

  // Sandbox variable

  unsigned char var{0b00000000};
  cout << setw(COLUMN_WIDTH) << "var: "
       << setw(COLUMN_WIDTH) << bitset<8>(var) << endl;

  // Set a few bits : make them 1's regardless of what's in there
  // SETTING BITS
  // Setting : |= with mask of the bit

  // Set bit 1
  cout << "Setting bit in position 1" << endl;
  var |= mask_bit_1;
  cout << setw(COLUMN_WIDTH) << "var: "
       << setw(COLUMN_WIDTH) << bitset<8>(var) << endl;

  // Set bit 2
  cout << "Setting bit in position 2" << endl;
  var |= mask_bit_2;
  cout << setw(COLUMN_WIDTH) << "var: "
       << setw(COLUMN_WIDTH) << bitset<8>(var) << endl;

  // Set bit 5
  cout << "Setting bit in position 5" << endl;
  var |= mask_bit_5;
  cout << setw(COLUMN_WIDTH) << "var: "
       << setw(COLUMN_WIDTH) << bitset<8>(var) << endl;

  // Set bit 6
  cout << "Setting bit in position 6" << endl;
  var |= mask_bit_6;
  cout << setw(COLUMN_WIDTH) << "var: "
       << setw(COLUMN_WIDTH) << bitset<8>(var) << endl;

  // RESSETING BITS : Sset to 0
  // Resetting : &=

  // Reset bit 1

  cout << "Resetting bit in position 1" << endl;
  var &= (~mask_bit_1);
  cout << setw(COLUMN_WIDTH) << "var: "
       << setw(COLUMN_WIDTH) << bitset<8>(var) << endl;

  // Reset bit 6

  cout << "Resetting bit in position 6" << endl;
  var &= (~mask_bit_6);
  cout << setw(COLUMN_WIDTH) << "var: "
       << setw(COLUMN_WIDTH) << bitset<8>(var) << endl;

  // Setting all the bits at once
  cout << "Setting all bits" << endl;
  var |= (mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 |
          mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7);
  cout << setw(COLUMN_WIDTH) << "var: "
       << setw(COLUMN_WIDTH) << bitset<8>(var) << endl;

  // Resetting the bits 2,5,7
  cout << "Resetting the bits 2,5,7" << endl;
  var &= ~(mask_bit_2 | mask_bit_5 | mask_bit_7);
  cout << setw(COLUMN_WIDTH) << "var: "
       << setw(COLUMN_WIDTH) << bitset<8>(var) << endl;


  // Check the status of a bit

  cout << endl;
cout << "Checking the state of each bit position (on/off)" << endl;
cout << "bit0 is " << ((var & mask_bit_0) >> 0) << endl;
cout << "bit1 is " << ((var & mask_bit_1) >> 1) << endl;
cout << "bit2 is " << ((var & mask_bit_2) >> 2) << endl;
cout << "bit3 is " << ((var & mask_bit_3) >> 3) << endl;
cout << "bit4 is " << ((var & mask_bit_4) >> 4) << endl;
cout << "bit5 is " << ((var & mask_bit_5) >> 5) << endl;

cout << "bit6 is " << ((var & mask_bit_6) >> 6) << endl;
cout << "bit6 is " << static_cast<bool>(var & mask_bit_6) << endl;

cout << "bit is " << ((var & mask_bit_7) >> 7) << endl;
cout << "bit7 is " << static_cast<bool>(var & mask_bit_7) << endl;

  return 0;
}