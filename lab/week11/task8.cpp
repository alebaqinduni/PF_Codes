#include <iostream>
using namespace std;
int main()
{
    int arr[3][5];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter element at position " << i << " " << j << ": ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << "Original matrix: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " \t";
        }
        cout << endl;
    }

    // largest column move
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i] >)
                cout << arr[i][j] << " \t";
        }
        cout << endl;
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int row = 3, col = 3;
//     int arr[3][3];
//     // Input matrix
//     cout << "Enter elements:\n";
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     // Find largest column sum
//     int maxSum = 0, maxCol = 0;
//     for (int j = 0; j < col; j++)
//     {
//         int sum = 0;
//         for (int i = 0; i < row; i++)
//         {
//             sum = sum + arr[i][j];
//         }
//         if (j == 0 || sum > maxSum)
//         {
//             maxSum = sum;
//             maxCol = j;
//         }
//     }
//     for (int i = 0; i < row; i++)
//     {
//         int temp = arr[i][0];
//         arr[i][0] = arr[i][maxCol];
//         arr[i][maxCol] = temp;
//     }
//     cout << "\nMatrix after moving largest column first:\n";

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }