#include <iostream>
using namespace std;


int main () {
    double celsius, fahrenheit;
    cout << "Give me a temperature in Celsius" << endl;
    cin >> celsius;
    fahrenheit = (9.0 / 5.0 ) * celsius + 32;
    cout << celsius << " Celsius is " << fahrenheit << " Fahrenheit.";
    return 0;
}