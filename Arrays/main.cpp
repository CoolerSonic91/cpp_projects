#include <iostream>
using namespace std;

int main()
{

    double salaries[5] = {12.7, 7.5, 13.2, 8.1, 9.3};

    for (size_t i = 0; i < 5; i++)
    {
        cout << "salaries [" << i << "]" << salaries[i] << endl;
    }

    int points[]{2, 5, 8, 2, 5, 6, 9};
    int sum{0};
    int scores[10];

    /*
        cout << " Scores [0] : " << scores[0] << endl;
        cout << " Scores [1] : " << scores[1] << endl;

    */

    // Reading with a loop
    /*
    for (size_t i = 0; i < 10; i++)
    {
        cout << "scores [" << i << "]" << scores[i] << endl;
    }
*/

    // Writes data into an array

    /*
    scores[0] = 20;
    scores[1] = 24;
    scores[2] = 21;
*/

    for (size_t i = 0; i < 10; i++)
    {
        scores[i] = i * 10;
    }

    cout << "\n"
         << endl;

    for (size_t i = 0; i < 10; i++)
    {
        cout << "scores [" << i << "]" << scores[i] << endl;
    }

    cout << "\n"
         << endl;

    for (int element : points)
    {
        sum += element;
    }
    cout << "Score sum : " << sum << endl;

    return 0;
}
