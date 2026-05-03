#include <iostream>
using namespace std;
int main()
{
    // identity matrix;
    // int identity[3][3] = {{1, 0, 0},
    //                       {0, 1, 0},
    //                       {0, 0, 1}};
    int identity[3][3];
    cout << "Enter a 3x3 matrix: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> identity[i][j];
        }
    }
    cout << "You entered: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << identity[i][j] << " ";
        }
        cout << endl;
    }
    if (identity[0][0] == 1 && identity[0][1] == 0 && identity[0][2] == 0 && identity[1][0] == 0 && identity[1][1] == 1 && identity[1][2] == 0 && identity[2][0] == 0 && identity[2][1] == 0 && identity[2][2] == 1)
    {
        cout << "This is an identity matrix." << endl;
    }
    else
    {
        cout << "This is not an identity matrix." << endl;
    }
    // 1 then 3 zeros then 1 then 3 zeros;

    return 0;
}