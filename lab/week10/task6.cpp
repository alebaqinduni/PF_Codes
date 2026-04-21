#include <iostream>
using namespace std;

int fact(int x)
{
    int f = 1;

    for (int i = 1; i <= x; i++)
    {
        f = f * i;
    }

    return f;
}

bool isStrong(int num)
{
    int original = num;
    int sum = 0;

    while (num > 0)
    {
        int digit = num % 10;
        sum = sum + fact(digit);
        num = num / 10;
    }

    if (sum == original)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;

    cout << "Enter number: ";
    cin >> n;

    if (isStrong(n))
    {
        cout << n << " is Strong Number";
    }
    else
    {
        cout << n << " is Not Strong Number";
    }

    return 0;
}

/*
A number is called Strong Number if sum of factorial of its digits = number
Example: 145 → 1! + 4! + 5! = 145
Create function isStrong(int num) that returns true/false.
*/

// #include <iostream>
// using namespace std;
// int fact(int x)
// {
//     int f = 1;
//     for (int i = 1; i <= x; i++)
//     {
//         f = f * i;
//     }
//     return f;
// }
// int main()
// {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;
//     cout << "Factorial of " << n << " is " << fact(n) << endl;
//     return 0;
// }