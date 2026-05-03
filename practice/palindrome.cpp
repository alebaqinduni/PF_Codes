#include <iostream>
using namespace std;
bool isPalindrome(string s) // start=reverse
{                           // stringggggggggggggggggggg

    int start = 0;
    int end = s.length() - 1;
    while (start < end)
    {
        if (s[start] != s[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main()
{
    string n;
    cout << "Enter: ";
    cin >> n;

    if (isPalindrome(n))
        cout << "Is a palindrome! ";
    else
        cout << "Not! ";

    return 0;
}