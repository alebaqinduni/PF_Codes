#include <iostream>
using namespace std;
void printCars(int cars[][5], int size)
{
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << cars[row][col] << "\t";
        }
        cout << endl;
    }
}
int main()
{

    const int rowSize = 5;
    const int colSize = 5;
    int cars[rowSize][colSize] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}};
    printCars(cars, rowSize);
    return 0;
}