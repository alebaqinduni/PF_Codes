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
int main()
{
    int n;
    cout << "We will take number: " << endl;
    cin >> n;
    int arr[100][3];

    take(arr, n);
    give(arr, n);

    return 0;
}