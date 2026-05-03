// for columns
#include <iostream>
using namespace std;

void take(int arr[][3], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter value for [" << i << "][" << j << "]: ";
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

void swapMax(int arr[][3], int size)
{
    // sum
    int colSum[3] = {0};
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < size; i++)
        {
            colSum[j] += arr[i][j];
        }
    }
    // max
    int maxCol = 0;
    for (int j = 1; j < 3; j++)
    {
        if (colSum[j] > colSum[maxCol])
        {
            maxCol = j;
        }
    }
    // swap
    for (int i = 0; i < size; i++)
    {
        // int ans=swap(arr[i][0],arr[i][j]);
        int temp = arr[i][0];
        arr[i][0] = arr[i][maxCol];
        arr[i][maxCol] = temp;
    }
}
int main()
{
    int n;
    cout << "Enter values of rows: ";
    cin >> n;
    int arr[100][3];
    take(arr, n);
    cout << "Before: " << endl;
    give(arr, n);
    cout << "After: " << endl;
    swapMax(arr, n);
    give(arr, n);
}