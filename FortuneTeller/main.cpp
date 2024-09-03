#include <iostream>
#include <ctime>
using namespace std;

int main()
{

    srand(time(0));

    const int max_length{15};
    char name[max_length]{};
    cout << "What is your name, dear?" << endl;
    cin.getline(name, max_length);


    //Method 2
    const char *predictions[]{

        "a lot of kinds running in the backyard.",
        "A lot of empty beer bottles on your work table.",
        "you Partying too much with kids wearing strange clothes.",
        "you running away from something scary.",
        "clouds gathering in the sky and an army standing ready for war.",
        "dogs running around in a deserted city.",
        "a lot of cars stuck in a terrible traffic jam.",
        "you sitting in the dark typing lots of lies of code on your dirty computer.",
        "you yelling at your boss. And oh no! You got fired!",
        "you laughing out loud. I've never seen this before.",
        "Hmmmm, I don't see anything now.",
        "AHHHHHHHH, they shot me...(dies)"

    };



    /*
    //Method 1
    char predictions[][90]{

        "a lot of kinds running in the backyard.",
        "A lot of empty beer bottles on your work table.",
        "you Partying too much with kids wearing strange clothes.",
        "you running away from something scary.",
        "clouds gathering in the sky and an army standing ready for war.",
        "dogs running around in a deserted city.",
        "a lot of cars stuck in a terrible traffic jam.",
        "you sitting in the dark typing lots of lies of code on your dirty computer.",
        "you yelling at your boss. And oh no! You got fired!",
        "you laughing out loud. I've never seen this before.",
        "Hmmmm, I don't see anything now.",
        "AHHHHHHHH, they shot me...(dies)"

        };
*/
    bool end{false};

    while (!end)
    {

        cout << "Oh dear " << name << ", I see...";

        size_t random = static_cast<size_t>((rand() % size(predictions)));

        cout << predictions[random] << endl;

        cout << "Do you want me to try again ? (Y | N): ";

        char go_on;
        cin >> go_on;

        end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;
    }

    cout << "That would be all for today, my dear. Best wishes!" << endl;

    return 0;
}
