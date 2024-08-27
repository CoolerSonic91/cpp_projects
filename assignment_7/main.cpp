#include <iostream>
using namespace std;

int main()
{
     int latitude, longitude;

     cout << "Where are you right now?" << endl;
     cout << "In what coordinates are you?" << endl;
     cout << "latitude = ";
     cin >> latitude;
     cout << "longitude = ";
     cin >> longitude;

     if (latitude > 20 || latitude < -20 || longitude > 10 | longitude < -10)
     {
          cout << "No way, you are out of reach!\n";
          return 0;
     }

     cout << "Surrender yourself, You're completely surrounded!" << endl;

     return 0;
}
