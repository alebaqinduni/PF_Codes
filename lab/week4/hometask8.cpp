#include <iostream>
using namespace std;
int main()
{
  int number;
  cout << "Enter a number(0-100): ";
  cin >> number;
  int ones = number % 10;
  int teens = number / 10;
  int tens = number / 10;
  cout << "Teens: " << teens << endl;
  cout << "Ones: " << ones << endl;
  if (number >= 20 && number <= 100)
  {
    if (number == 100)
    {
      cout << " Hundred";
    }
    if (tens == 9)
    {
      cout << " Ninety";
    }
    if (tens == 8)
    {
      cout << " Eighty";
    }
    if (tens == 7)
    {
      cout << " Seventy";
    }
    if (tens == 6)
    {
      cout << " Sixty";
    }
    if (tens == 5)
    {
      cout << " Fifty";
    }
    if (tens == 4)
    {
      cout << " Forty";
    }
    if (tens == 3)
    {
      cout << " Thirty";
    }
    if (tens == 2)
    {
      cout << " Twenty";
    }
    if (tens == 1)
    {
      cout << " Ten";
    }
    if (teens == 19)
    {
      cout << " Nineteen";
    }
    if (teens == 18)
    {
      cout << " Eighteen";
    }
    if (teens == 17)
    {
      cout << " Seventeen";
    }
    if (teens == 16)
    {
      cout << " Sixteen";
    }
    if (teens == 15)
    {
      cout << " Fifteen";
    }
    if (teens == 14)
    {
      cout << " Fourteen";
    }
    if (teens == 13)
    {
      cout << " Thirteen";
    }
    if (teens == 12)
    {
      cout << " Twelve";
    }
    if (teens == 11)
    {
      cout << " Eleven";
    }
    if (teens == 10)
    {
      cout << " Ten";
    }
    if (ones == 9)
    {
      cout << " Nine";
    }
    if (ones == 8)
    {
      cout << " Eight";
    }
    if (ones == 7)
    {
      cout << " Seven";
    }
    if (ones == 6)
    {
      cout << " Six";
    }
    if (ones == 5)
    {
      cout << " Five";
    }
    if (ones == 4)
    {
      cout << " Four";
    }
    if (ones == 3)
    {
      cout << " Three";
    }
    if (ones == 2)
    {
      cout << " Two";
    }
    if (ones == 1)
    {
      cout << " One";
    }
  }
  return 0;
}