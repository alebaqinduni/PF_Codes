#include <iostream>
using namespace std;
bool checkAlphabet(char a)
{
    if (a >= 'A' && a <= 'Z') // true & for ascii
    {
        return true; // not bool its return;
    }
    else if (a >= 'a' && a <= 'z')
    {
        return false;
    }
    else
    {
        return false;
    }
}
int main()
{
    char value;
    cout << "Enter char: ";
    cin >> value;
    if (checkAlphabet(value))
    {
        cout << "The character is uppercase." << endl;
    }
    else
    {
        cout << "The character is not uppercase." << endl;
    }

    return 0;
}
