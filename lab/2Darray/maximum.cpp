// #include <iostream>
// using namespace std;

// void take(int arr[][3], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << "Enter value for [" << i << "][" << j << "]: ";
//             cin >> arr[i][j];
//         }
//     }
// }
// void give(int arr[][3], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// int mx(int arr[][3], int size)
// {
//     int y = arr[0][0];
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (arr[i][j] > y)
//             {
//                 y = arr[i][j];
//             }
//         }
//     }
//     return y;
// }
// int main()
// {
//     int n;
//     cout << "Enter values of rows: ";
//     cin >> n;
//     int arr[100][3];
//     take(arr, n);
//     give(arr, n);
//     int maq = mx(arr, n);
//     cout << maq << endl;
// }

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
int mx(int arr[][3], int size)
{
    int y = INT_MIN; // min function
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > y)
            {
                y = arr[i][j];
            }
        }
    }
    return y;
}
int main()
{
    int n;
    cout << "Enter values of rows: ";
    cin >> n;
    int arr[100][3];
    take(arr, n);
    give(arr, n);
    int maq = mx(arr, n);
    cout << maq << endl;
}