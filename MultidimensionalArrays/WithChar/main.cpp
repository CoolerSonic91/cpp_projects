#include <iostream>
using namespace std;

int main()
{
    const size_t name_length{15};

    // Puedes hacer esto con comillas dobles. Ej: "John"
    char members[][name_length]{
        "John",
        {'S', 'a', 'm', 'u', 'e', 'l'},
        {'R', 'o', 'd', 'r', 'i', 'g', 'u', 'e', 'z'}}; // 12 where we can store ints

    // Size to query the size of array dimensions
    for (size_t i{}; i < size(members); i++)
    {
        for (size_t j{}; j < size(members[i]); j++) // Pendiente del loop, que coodrinen las variables...sino salen cosas rara (Ya paso antes ._XD)
        {
            cout << members[i][j] << "  ";
        }
        cout << endl;
    }

    // Read data in the array
    /*
    for (size_t i{}; i < 3; i++)
    {
        for (size_t j{}; j < 4; j++) // Pendiente del loop, que coodrinen las variables...sino salen cosas rara (Ya paso antes ._XD)
        {
            cout << packages[i][j] << "  " ;
        }
        cout << endl;
    }

    */

    return 0;
}
