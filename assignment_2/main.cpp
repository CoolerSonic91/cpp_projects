#include <iostream>
using namespace std;

int main()
{
    double length, height, width;
    cout << "Welcome to my box calculator. Please, type in the length, width and height of your box." << endl;
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;
    double base_area = width * length;
    double volume = base_area * height;
    cout << "The base is: " << base_area << " cm" << endl;
    cout << "The volume is: " << volume << " cm" << endl;

    return 0;
}