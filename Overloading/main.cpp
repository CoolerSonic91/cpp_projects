#include <iostream>
#include <optional>
#include <cstring>
using namespace std;

/*
enum DayOfWeek
{
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

struct Cuenta
{
    string nombre;
    string iban;
    double fondos;
};

*/

/*
int main()
{
    Cuenta cliente1;
    cliente1.iban = ("DE929831283821980183");
    cliente1.nombre = "Jorge";
    cliente1.fondos = 34.56;
    DayOfWeek day{DayOfWeek::Tuesday};
    std::cout << "day : " << day << std::endl;
    cout << "Cuenta de " << cliente1.nombre << endl;
    cout << "Fondos : " << cliente1.fondos << endl;
    cout << "IBAN : " << cliente1.iban << endl;
    return 0;
}
*/
/*
int main(){

    std::optional<int> age{};
    std::cout << "value : " << age.value() << std::endl;
    return 0;
}
*/

int max(int a, int b)
{
    cout << "overloading with integers" << endl;
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

double max(double a, double b)
{
    cout << "overloading with doubles" << endl;
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

double max(double a, int b)
{
    cout << "(double and int)overloading with doubles" << endl;
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

double max(int a, double b)
{
    cout << "(int and double)overloading with doubles" << endl;
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{

    int x{54};
    int y{35};
    double a{45.8};
    double b{32.4};

    // auto result = max(x, y);
    auto result1 = max(a, b);
  //  auto result2 = max(x, b);
    auto result3 = max(a, y);

    return 0;
}