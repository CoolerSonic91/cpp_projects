#include <iostream>
#include "compare.h" //Preprocessor
#include "multiplication.h"
using namespace std;

int main()
{
    int maximum = max(900, 200);
    cout << "min : " << maximum << endl;

    int minimun = min(40, 39);
    cout << "min : " << minimun << endl;

    // Multiply
    int multiply = incr_mult(40, 50);
    cout << "multiplication : " << multiply << endl;

    return 0;
}