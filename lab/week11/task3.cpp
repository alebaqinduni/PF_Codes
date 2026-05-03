#include <iostream>
using namespace std;
int main()
{
    string color[5] = {"Red", "Black", "Brown", "Blue", "Grey"};
    int suzukiQuantity[5] = {10, 7, 12, 10, 4};
    int toyotaQuantity[5] = {18, 11, 15, 17, 2};
    int nissanQuantity[5] = {23, 19, 12, 16, 14};
    int bmwQuantity[5] = {7, 12, 16, 0, 2};
    int audiQuantity[5] = {3, 5, 6, 2, 1};

    int carData[5][5] = {{10, 7, 12, 10, 4},
                         {18, 11, 15, 17, 2},
                         {23, 19, 12, 16, 14},
                         {7, 12, 16, 0, 2},
                         {3, 5, 6, 2, 1}};
    cout << "A. " << toyotaQuantity[3] << endl;
    cout << "B.Red color: " << suzukiQuantity[1] + nissanQuantity[1] + bmwQuantity[1] + audiQuantity[1] << endl;
    cout << "C. Nissan quantity: " << nissanQuantity[0] + nissanQuantity[1] + nissanQuantity[2] + nissanQuantity[3] + nissanQuantity[4] << endl;

    return 0;
}