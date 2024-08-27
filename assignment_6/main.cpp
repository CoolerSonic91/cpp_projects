#include <iostream>
using namespace std;

int main()
{
     int day, passed_days;
     int day_difference;
     cout << "Hello! Could you tell me what day is today? (1. is Monday up until 7. which is Sunday)" << endl;
     cin >> day;
     cout << "How many days have passed since today?" << endl;
     cin >> passed_days;
     

     switch (day)
          do
          {

          case 1:

               cout << "Today is Monday." << endl;
               break;

          case 2:

               cout << "Today is Tuesday." << endl;
               break;
          case 3:

               cout << "Today is Wednesday." << endl;
               break;

          case 4:
               cout << "Today is Thursday." << endl;
               break;

          case 5:
               cout << "Today is Friday." << endl;
               break;

          case 6:
               cout << "Today is Saturday." << endl;
               break;

          case 7:
               cout << "Today is Sunday." << endl;
               break;

          default:
               cout << "Hahahaha! That is not a day." << endl;
               break;

          } while (day <= 7 && day >= 1);

     day_difference = (passed_days % 7);
     int days_past = day - day_difference;
     if (days_past <= 0) {
          days_past += 7;
     }

     cout << "If we went " << passed_days << " days from today, it would be ";

     switch (days_past)
          do
          {

          case 1:

               cout << "Monday." << endl;
               break;

          case 2:

               cout << "Tuesday." << endl;
               break;
          case 3:

               cout << "Wednesday." << endl;
               break;

          case 4:
               cout << "Thursday." << endl;
               break;

          case 5:
               cout << "Friday." << endl;
               break;

          case 6:
               cout << "Saturday." << endl;
               break;

          case 7:
               cout << "Sunday." << endl;
               break;

          default:
               cout << "Hahahaha! That is not a day." << endl;
               break;

          } while (day <= 7);

     return 0;
}
