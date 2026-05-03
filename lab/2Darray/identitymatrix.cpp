// identity matrix
#include <iostream>
using namespace std;
void take(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter value for [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
}
void give(int arr[][3])
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
bool identity(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[0][0] == 1 && arr[0][1] == 0 && arr[0][2] == 0 && arr[1][0] == 0 && arr[1][1] == 1 && arr[1][2] == 0 && arr[2][0] == 0 && arr[2][1] == 0 && arr[2][2] == 1)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][3];
    take(arr);
    cout << "You entered! " << endl;
    give(arr);
    if (identity(arr))
    {
        cout << "Identity matrix! ";
    }
    else
    {
        cout << "Not!";
    }
    return 0;
}
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
// bool identity(int arr[][3], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (arr[0][0] == 1 && arr[0][1] == 0 && arr[0][2] == 0 && arr[1][0] == 0 && arr[1][1] == 1 && arr[1][2] == 0 && arr[2][0] == 0 && arr[2][1] == 0 && arr[2][2] == 1)
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// int main()
// {
//     int n;
//     cout << "Rows: ";
//     cin >> n;
//     int arr[100][3];
//     take(arr, 3);
//     cout << "You entered! " << endl;
//     give(arr, 3);
//     if (identity(arr, 3))
//     {
//         cout << "Identity matrix! ";
//     }
//     else
//     {
//         cout << "Not!";
//     }
//     return 0;
// }