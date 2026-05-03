#include <iostream>
using namespace std;
int main()
{
    // updating arr
    int num[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num[i];
    }
    num[0] = 8;
    num[1] = 6;
    num[2] = 4;

    for (int i = 0; i < 10; i++)
    {
        cout << num[i] << endl;
    }

    //------------------------------------
    // double number[4] = {1.5, 7.8, 6.9, 3.2};
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << i + 1 << ". " << number[i] << endl;
    // }

    // array of integers
    // int number[4];
    // number[0] = 9;
    // number[1] = 5;
    // number[2] = 3;
    // number[3] = 1;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << number[i] << endl;
    // }
    // return 0;

    // by value
    // int number[8];
    // for (int i = 0; i < 8; i++)
    // {
    //     cin >> number[i];
    // }

    // for (int i = 0; i < 8; i++)
    // {
    //     cout << number[i] << endl;
    // }
}
