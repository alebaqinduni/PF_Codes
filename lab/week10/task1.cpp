#include <iostream>
using namespace std;

int value1 = 10;
int value2 = 20; // global variable

int sum()
{
    value1 = 40; // local variable
    return value1 + value2;
}

int main()
{
    int x = value1;
    value1 = 100;
    x = 20;
    value2 = sum();
    cout << "value1: " << value1 << endl;
    cout << "value2: " << value2 << endl;
}
// value1: 40
// value2: 60
// local variable=accessed only in the function
// global variable=accessed in the whole program