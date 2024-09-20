#include <iostream>
#include <optional>
#include <cstring>
#include "utilities.h"

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

int main()
{
    std::string student_to_find{"Kumar"};
    const char *students[]{"Mary", "Steve", "Kumar", "Ahmed"};
    int index{hunt_down(student_to_find.c_str(), students, 4)};
    std::cout << "index : " << index << std::endl;

    return 0;
}