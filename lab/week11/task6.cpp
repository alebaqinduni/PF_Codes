#include <iostream>
using namespace std;
int main()
{

    // int matrix[5][5] = {{".", ".", ".", "*", "*"},
    //                     {".", "*", ".", ".", "."},
    //                     {".", "*", ".", ".", "."},
    //                     {".", "*", ".", ".", "."},
    //                     {".", ".", "*", "*", "."}};

    cout << "Enter number: " << endl;
    char n;
    cin >> n;
    if (n == 'A1' || n == 'A2' || n == 'A3' || n == 'B1' || n == 'B3' || n == 'B4' || n == 'B5' || n == 'C1' || n == 'C3' || n == 'C4' || n == 'C5' || n == 'D1' || n == 'D3' || n == 'D4' || n == 'D5' || n == 'E1' || n == 'E2' || n == 'E5')
    {
        cout << "Splash! ";
    }
    else
    {
        cout << "Boom! ";
    }

    return 0;
}