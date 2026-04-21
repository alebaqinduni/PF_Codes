#include <iostream>
using namespace std;
bool symmetrical(int number)
{
    int firstnumber = number / 100;
    int lastnumber = number % 10;
    return firstnumber == lastnumber;
    // if (firstnumber == lastnumber)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
}
int main()
{
    int number;
    cout << "Enter 3 digit number: ";
    cin >> number;
    if (symmetrical(number))
    {
        cout << "This is symmetrical!";
    }
    else
    {
        cout << "This is not symmetrical!";
    }
    return 0;
}