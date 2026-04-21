#include <iostream>
using namespace std;
int main()
{
    int age1, age2, age3;
    string name1, name2, name3;
    cout << "Enter age of 1st brother: ";
    cin >> age1;
    cout << "Enter age of 2nd brother: ";
    cin >> age2;
    cout << "Enter age of 3rd brother: ";
    cin >> age3;
    if (age1 < age2 && age1 < age3)
    {
        cout << "The Youngest Brother is: " << age1 << endl;
    }
    else if (age2 < age1 && age2 < age3)
    {
        cout << "The Youngest Brother is: " << age2 << endl;
    }
    else

    {
        cout << "The Youngest Brother is: " << age3 << endl;
    }
    return 0;
}