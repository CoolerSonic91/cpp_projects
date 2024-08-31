#include <iostream>
using namespace std;

int main()
{

    // 2D array
    int packages[3][4]{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}}; // 12 where we can store ints

    // 3D arrays are defined in the same way. We just use threee sets of indexes.
    // 3 lights per room, 5 room per houes and 7 houses per block.
    int house_block[7][5][3]{
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {13, 14, 15}},
        {{16, 17, 18}, {19, 20, 21}, {22, 23, 24}, {25, 26, 27}, {28, 29, 30}},
        {{31, 32, 33}, {34, 35, 36}, {37, 38, 39}, {40, 41, 42}, {43, 44, 45}},
        {{46, 47, 48}, {49, 50, 51}, {52, 53, 54}, {55, 56, 57}, {58, 59, 60}},
        {{61, 62, 63}, {64, 65, 66}, {67, 68, 69}, {70, 71, 72}, {73, 74, 75}},
        {{76, 77, 78}, {79, 80, 81}, {82, 83, 84}, {85, 86, 87}, {88, 89, 90}},
        {{91, 92, 93}, {94, 95, 96}, {97, 98, 99}, {100, 101, 102}, {103, 104, 105}},
    };

    for (size_t i{0}; i < size(house_block); i++)
    {
        for (size_t j{0}; j < size(house_block[i]); j++)
        {
            cout << "[";

            for (size_t k {0}; k < size(house_block[i][j]); k++)
            {
                cout << house_block[i][j][k] << "   ";
            }
            cout << "]";
        }
        cout << endl;
    }

    // Size to query the size of array dimensions
    for (size_t i{}; i < size(packages); i++)
    {
        for (size_t j{}; j < size(packages[i]); j++) // Pendiente del loop, que coodrinen las variables...sino salen cosas rara (Ya paso antes ._XD)
        {
            cout << packages[i][j] << "  ";
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
