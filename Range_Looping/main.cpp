#include <iostream>
using namespace std;

int main()
{

    int bag_of_chips[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // A collection of chips

    // The variable value will receive a value from the aaray on each iteration

   for (size_t i = 0; i < 10; i++)
   {
    cout << "value :" << bag_of_chips[i] << endl;
   }
    
   
    /*
    for (int value : bag_of_chips)
    {
        // value holds a a copy of the current iteration in the whole bag
        cout << "value : " << value << endl;
    }
*/

    return 0;
}
