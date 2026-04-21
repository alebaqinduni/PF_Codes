// #include <iostream>
// using namespace std;
// int main()
// {
//     float distance, degree;
//     cout << "Enter the distance from base of tree: ";
//     cin >> distance;
//     cout << "Enter the angle of elevation: ";
//     cin >> degree;
//     float angle = degree / 57.3;
//     float height = distance * tan(angle);
//     cout << height;
// }

#include <iostream>
using namespace std;
float heightofTree(float degree, float distance)
{
    cout << "Enter the distance from base of tree: ";
    cin >> distance;
    cout << "Enter the angle of elevation: ";
    cin >> degree;
    float angle = degree / 57.3;
    float height = distance * tan(angle);
    return height;
}
int main()
{
    float degree, distance;
    cout << heightofTree(degree, distance);
}