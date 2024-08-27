#include <iostream>
#include <iomanip>
using namespace std;

bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int main()
{
    
    
    int year, first_day_of_the_Month;

    cout << "Enter a year : " << endl;
    cin >> year;

    cout << "Enter the first day of the month : " << endl;
    cin >> first_day_of_the_Month;

    cout << "\nCalendar of " << year << "\n" << endl;

    const int numbers_of_days[] = {31, isLeapYear(year) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const string nameOfMonth[] = {"January", "Febraury", "March", "April", "May", "June", "July",
                            "August", "September", "October", "November", "December"};

    int dayOfWeek = first_day_of_the_Month - 1;

    //here the intend is to match the number of months in a year
    for (int month = 0; month < 12; month++)
    {
        cout << "-- " << nameOfMonth[month] << " " << year << " --" << "\n" << endl;
        cout << "Mon Tue Wed Thu Fri Sat Sun\n"
             << endl;


        //This is for spacing
        for (int i = 0; i < dayOfWeek; i++)
        {
            cout << setw(4) << " ";
        }


        //Same thing but the spacing is for the days that are in a month
        for (int day = 1; day <= numbers_of_days[month]; day++)
        {
            
            cout << setw(3) << day << " ";
            if ((dayOfWeek + day - 1) % 7 == 6)
            {
                cout << "\n";
            }
        }
        cout << "\n" << endl;

        dayOfWeek = (dayOfWeek + numbers_of_days[month]) % 7;
    }

    return 0;
}
