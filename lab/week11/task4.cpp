#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int matrix[3][3] = {{2, 4, 5},
                        {6, 7, 1},
                        {0, 1, 2}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
            sum += matrix[i][j];
        }
        cout << endl;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}