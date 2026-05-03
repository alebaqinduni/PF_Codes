#include <iostream>
using namespace std;
void take(string arr[][3], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter string for [" << i << "][" << j << "] :";
            cin >> arr[i][j];
        }
    }
}

void give(string arr[][3], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter rows number: ";
    cin >> n;
    string arr[100][3];
    take(arr, n);
    give(arr, n);
    // for string,only change int of arr[][] to string.
    return 0;
}