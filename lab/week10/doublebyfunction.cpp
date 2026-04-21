#include <iostream>
using namespace std;

int doubleGame(int x)
{
    return x * 2;
}

int main()
{
    int n;
    cout << "Write n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Double of " << i << " is " << doubleGame(i) << endl;
    }
    return 0;
}
