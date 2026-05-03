// for rows
#include <iostream>
using namespace std;
void take(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter value for [" << i << "][" << j << "] :";
            cin >> arr[i][j];
        }
    }
}
void give(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void maxRow(int arr[3][3])
{
    // sum
    int rowSum[3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            rowSum[i] += arr[i][j];
        }
    }
    // max
    int maxRow = 0;
    for (int i = 0; i < 3; i++)
    {
        if (rowSum[i] > rowSum[maxRow])
        {
            maxRow = i;
        }
    }
    // swap
    for (int j = 0; j < 3; j++)
    {
        int temp = arr[0][j];
        arr[0][j] = arr[maxRow][j];
        arr[maxRow][j] = temp;
    }
}
int main()
{
    int arr[3][3];
    take(arr);
    cout << "Before: " << endl;
    give(arr);
    cout << "After: " << endl;
    maxRow(arr);
    give(arr);
}