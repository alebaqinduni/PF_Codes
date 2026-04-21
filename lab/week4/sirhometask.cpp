#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int ones = number % 10;
    int tens = number / 10;
    cout << "Tens: " << tens << endl;
    cout << "Ones : " << ones << endl;
    if (number >= 20 && number <= 99)
    {
        if (tens == 2)
        {
            cout << "Twenty ";
        }
        if (tens == 3)
        {
            cout << "Thirty ";
        }
        if (tens == 4)
        {
            cout << "Forty ";
        }
        if (tens == 5)
        {
            cout << "Fifty ";
        }
        if (tens == 6)
        {
            cout << "Sixty ";
        }
        if (tens == 7)
        {
            cout << "Seventy ";
        }
        if (tens == 8)
        {
            cout << "Eighty ";
        }
        if (tens == 9)
        {
            cout << "Ninety ";
        }
        if (tens == 100)
        {
            cout << "Hundred ";
        }
        if (ones == 1)
        {
            cout << "One";
        }
        if (ones == 2)
        {
            cout << "Two";
        }
        if (ones == 3)
        {
            cout << "Three";
        }
        if (ones == 4)
        {
            cout << "Four";
        }
        if (ones == 5)
        {
            cout << "Five";
        }
        if (ones == 6)
        {
            cout << "Six";
        }
        if (ones == 7)
        {
            cout << "Seven";
        }
        if (ones == 8)
        {
            cout << "Eight";
        }
        if (ones == 9)
        {
            cout << "Nine";
        }
    }
    return 0;
}