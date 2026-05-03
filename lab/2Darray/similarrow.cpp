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
// int ans(int arr[][3], int size)
// {

//     int count = 0;
//     for (int i = 0; i < size; i++)
//     {
//         int freq = 0;                  // inside loop pls
//         for (int j = 0; j < size; j++) // consider j the row pls otherwise error
//         {
//             if (arr[i][0] == arr[j][0] &&
//                 arr[i][1] == arr[j][1] &&
//                 arr[i][2] == arr[j][2])
//             {
//                 freq++;
//             }
//         }
//         if (freq > 1)
//         {
//             count += freq;
//         }
//     }
//     return count;
// }
// int main()
// {
//     int n;
//     cout << "Enter Rows: ";
//     cin >> n;
//     int arr[100][3];
//     take(arr, n);
//     give(arr, n);

//     cout << "Repeated times are: " << ans(arr, n) << endl;
//     return 0;
// }
#include <iostream>
using namespace std;
int countIdenticalArrays(int arr[][3], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int freq = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i][0] == arr[j][0] &&
                arr[i][1] == arr[j][1] &&
                arr[i][2] == arr[j][2])
            {
                freq++;
            }
        }
        if (freq > 1)
        {
            count = count + freq;
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    int arr[100][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << countIdenticalArrays(arr, n);
    return 0;
}