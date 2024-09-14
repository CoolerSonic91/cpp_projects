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

 
int main(){
 
    unsigned int age{13};
 
    auto say_my_age = [&age](){
        std::cout << "You are " << age << " years old!" << std::endl;
        ++age;
    };
    say_my_age();
    std::cout << "age " << age << std::endl;
 
    return 0;
}