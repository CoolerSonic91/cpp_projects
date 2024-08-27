#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    

    /*
    int random_num = rand();

    cout << "Random numbers : " << random_num << endl;

    random_num = rand();

    cout << "Random numbers : " << random_num << endl;
    */

    // Generating numbers via loops
    /*
    for (size_t i = 0; i < 20; i++)
    {
        random_num = rand();
        cout << "Random numbers " << i << ":" << random_num << endl;
    }

    */

    int rand_num = rand() + 11;

    for (size_t i = 0; i < 20; i++)
    {
        rand_num = rand() + 11;
        cout << "random number " << i << ":" << rand_num << endl;
    }

    return 0;
}
