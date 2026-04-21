#include <iostream>
using namespace std;
void calculation(int hours, int firm, int workers)
{
    int totalHours = (firm * 0.9) * 10 * workers;
    if (totalHours >= hours)
    {
        cout << "Yes! " << totalHours - hours << " hours left." << endl;
    }
    else
    {
        cout << "Not enough time! " << hours - totalHours << " hours needed." << endl;
    }
}

int main()
{

    int hours, firm, workers;
    cout << "Enter needed hours: ";
    cin >> hours;
    cout << "Enter number of days of firm: ";
    cin >> firm;
    cout << "Enter number of Workers: ";
    cin >> workers;
    calculation(hours, firm, workers);
    return 0;
}

/*
A firm gets a request for creating a project for which a certain number of hours are
needed. The firm has a certain number of days. During 10% of the days, the workers are
being trained and cannot work on the project. A normal working day is 8 hours long. The
project is important for the firm and every worker must work on it with overtime of 2
hours per day.
Final answer in hours must be rounded down to the nearest integer (for example, 6.98
hours are rounded to 6 hours).
Write a program that calculates whether the firm can finish the project on time and how
many hours more are needed or left.
You have to make a function projectTimeCalculation that takes needed hours, days that
the firm has and number of workers as input and then returns the string as answer.
Input Data
Skill: Distinguish between Local and Global Variables
The input data is read from the console and contains exactly three lines:
● On the first line are the needed hours – an integer in the range of [0 ... 200 000].
● On the second line are the days that the firm has – an integer in the range of [0 ...
20 000].
● On the third line are the number of all workers – an integer in the range of [0 ...
200].
Output Data
Print one line on the console:
● If the time is enough:
○ "Yes!{the hours left} hours left.".
● If the time is NOT enough:
○ "Not enough time!{additional hours} hours needed.".
*/