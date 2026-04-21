#include <iostream>
using namespace std;
void sum(int num1, int num2)
{
    cout << "Sum is: " << num1 + num2 << endl;
}
int main()
{
    int num1, num2;
    cout << "Enter 1st digit: ";
    cin >> num1;
    cout << "Enter 2nd digit: ";
    cin >> num2;
    sum(num1, num2);

    return 0;
}