#include <iostream>
#include <ctime>
using namespace std;

int main()
{

    srand(time(0)); //seed
    bool end{false};
    unsigned int MAX_NUMBER{200};
    cout << "Welcome to the greatest calculator on Earth!" << endl;

    while (!end)
    {

        int num1 = static_cast<size_t>(rand() % MAX_NUMBER);
        int num2 = static_cast<size_t>(rand() % MAX_NUMBER);

        int operations = static_cast<size_t>(rand() % 3);

        switch (operations)
        {

        // Addition
        case 0:
            cout << "\nThe result of (" << num1 << " + " << num2 << ") is : ";
            break;

        // Substraction
        case 1:
            cout << "\nThe result of (" << num1 << " - " << num2 << ") is : ";
            break;

        // Multiplication
        case 2:
            cout << "\nThe result of (" << num1 << " * " << num2 << ") is : ";
            break;
        }
        int result;
        cin >> result;
        

        switch (operations)
        {
        case 0:
            if (result == (num1 + num2)){
                cout << "Congratulations! " << result << " is the correct result." << endl;
            } else {
                cout << "Not quite! the correct result is : " << num1 + num2 << endl;
            }
            break;

        case 1:
            if (result == (num1 - num2)) {
                cout << "Congratulations! " << result << " is the correct result." << endl;
            } else {
                cout << "Not quite! the correct result is : " << num1 - num2 << endl;
            }
            break;

        case 2:
            if (result == (num1 * num2))
            {
                cout << "Congratulations! " << result << " is the correct result." << endl;
            }
            else
            {
                cout << "Not quite! the correct result is : " << num1 * num2 << endl;
            }
            break;
        }

        char go_on;

        cout << "\nWould you like me to try again? (Y | N)" << endl;

        cin >> go_on;

        end = !((go_on == 'Y') || (go_on == 'y'));
    }

    cout << "Have nice day!" << endl;

    return 0;
}