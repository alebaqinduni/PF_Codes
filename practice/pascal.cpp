#include <iostream>
using namespace std;
int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++) // i=1 please otherwise error
    {
        f *= i;
    }
    return f;
}

int ncr(int c, int r)
{
    int a = fact(c);
    int b = fact(r);
    int d = fact(c - r);
    return a / (b * d);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        // for (int j = 0; j <= n - i; j++)
        // {

        //     cout << "  ";
        // }
        for (int j = 0; j <= i; j++)
        {
            int ans = ncr(i, j);
            cout << ans << "   ";
        }
        cout << endl;
    }
    return 0;
}