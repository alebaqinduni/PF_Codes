#include <iostream>
using namespace std;
void take(int arr[][3], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the value for [" << i << "][" << j << "]:";
            cin >> arr[i][j];
        }
    }
}
void give(int arr[][3], int size)
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
void sum(int arr[][3], int size)
{
    int s = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            s += arr[i][j];
        }
    }
    cout << s << endl;
}
int main()
{
    int n;
    cout << "Enter values for rows: ";
    cin >> n;
    int arr[100][3];
    take(arr, 3);
    cout << "Before: " << endl;
    give(arr, 3);
    cout << "After: " << endl;
    sum(arr, 3);
    return 0;
}