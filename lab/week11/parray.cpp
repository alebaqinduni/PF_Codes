#include <iostream>
using namespace std;
int largestNumber(int maximum, int mx[5][5])
{
    maximum = mx[0][0];
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            if (mx[row][col] > maximum)
            {
                maximum = mx[row][col];
            }
        }
    }
    return maximum;
}
int main()
{
    int value[5][5] = {{2, 4, 6, 8, 10}, {3, 5, 7, 9, 11}, {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
    int maximum;
    cout << largestNumber(maximum, value);
    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int value[2][4] = {{2, 4, 6, 8}, {3, 5, 7, 9}};
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout << value[i][j] << " ";
//         }
//         cout << endl;
//     }
// }