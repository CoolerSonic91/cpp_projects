#include <iostream>
using namespace std;

int main()
{
     int age;

     cout << "Hello! Please, type in your age." << endl;
     cin >> age;

     if (age >= 21)
     {
          if (age <= 39)
          {
               cout << "You are eligible for the treatment (age range 21-39 years old) " << endl;
          }
          else
          {
               cout << "We are sorry to inform you that you are not eligible for the treatment (age range: 21-39 years old)" << endl;
          }
     }

     return 0;
}

// There's a medical treatment that is only applicable
//  if your age is between 21 and 39 inclusive (21 and 39 are included in the range).
//  Your task as a C++ developer is to write a program that prompts the user to type in their age.
// The program is then going to check if the age is within the valid range.
//  If within the range the program will print a message "You are eligible for the treatment".
// If not within the range you'll print out a message saying they are either too old or too young for the treatment.