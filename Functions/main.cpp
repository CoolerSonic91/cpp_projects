#include <iostream>
#include "compare.h" //Preprocessor
using namespace std;

int main(){

    int x {5};
    int y{12};

   int result = min(x,y);
   cout << "min : " << result << endl;

   result = max(x,y);
   cout << "min : " << result << endl;

    return 0;
}