#include <iostream>
using namespace std;

int take()
{
    int x;
    cin >> x;
    return x;
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

float divi(int a, int b)
{
    return (float)a / b;
}

int mult(int a, int b)
{
    return a * b;
}

void give(int x)
{

    cout << x;
}

int main()
{
    cout << "Enter 1st number: ";
    int a = take();
    cout << "Enter 2nd number: ";
    int b = take();
    cout << "Enter operator: ";
    char c;
    cin >> c;
    if (c == '+')
    {
        int sum = add(a, b);
        give(sum);
    }
    else if (c == '-')
    {
        int difference = sub(a, b);
        give(difference);
    }
    else if (c == '*')
    {
        int product = mult(a, b);
        give(product);
    }
    else if (c == '/')
    {
        float quotient = divi(a, b);
        give(quotient);
    }
    return 0;
}