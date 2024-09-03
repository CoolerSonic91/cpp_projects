#include <iostream>
#include <ctime>
using namespace std;

int main()
{

    const char *message{"Hello world"};

    cout << "message : " << message << endl;
    cout << "message : " << *message << endl;

    char message1[]{"Hello World!"};
    message1[0] = 'J';
    cout << "message1 : " << message1 << endl;

    return 0;
}