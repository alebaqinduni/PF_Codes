// #include <iostream>
// using namespace std;
// //-------------------------2nd largest--------
// int mx(int x[], int size)
// {
//     int y = x[0];
//     for (int i = 0; i < size; i++)
//     {
//         if (x[i] > y)
//         {
//             y = x[i];
//         }
//     }
//     return y;
// }

// int smx(int x[], int size)
// {
//     int y = x[0];
//     for (int i = 0; i < size; i++)
//     {
//         if (x[i] != mx(x, size) && x[i] > y)
//         {
//             y = x[i];
//         }
//     }
//     return y;
// }

// int tmx(int x[], int size)
// {
//     int y = x[0];
//     for (int i = 0; i < size; i++)
//     {
//         if (x[i] != smx(x, size) && x[i] != mx(x, size) && x[i] > y)
//         {
//             y = x[i];
//         }
//     }
//     return y;
// }
// int main()
// {
//     int arr[] = {2, 4, 6, 8, 34, 19, 38, 50};
//     int frstmx = mx(arr, 8);
//     int secondmx = smx(arr, 8);

//     int thirdmx = tmx(arr, 8);
//     cout << frstmx << endl;

//     cout << secondmx << endl;
//     cout << thirdmx;
// }

#include <iostream>
using namespace std;
int mx(int x[], int size)
{
    int y = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (x[i] > y)
        {
            y = x[i];
        }
    }
    return y;
}

int smx(int x[], int size)
{
    int y = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (x[i] != mx(x, size) && x[i] > y)
        {
            y = x[i];
        }
    }
    return y;
}

int tmx(int x[], int size)
{
    int y = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (x[i] != smx(x, size) && x[i] != mx(x, size) && x[i] > y)
        {
            y = x[i];
        }
    }
    return y;
}

int fmx(int x[], int size)
{
    int y = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (x[i] != tmx(x, size) && x[i] != smx(x, size) && x[i] != mx(x, size) && x[i] > y)
        {
            y = x[i];
        }
    }
    return y;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int f = mx(arr, 9);
    int s = smx(arr, 9);
    int t = tmx(arr, 9);
    int fo = fmx(arr, 9);
    cout << f << endl;
    cout << s << endl;
    cout << t << endl;
    cout << fo << endl;
    return 0;
}