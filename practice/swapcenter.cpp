// #include <iostream>
// using namespace std;
// int imp(int a[], int n, int k)
// {
//     for (int i = 0; i < n; i += k)
//     {
//         int start = i;
//         int end = i + k - 1;

//         if (end >= n)
//             end = n - 1;

//         int l = start;
//         int r = end;

//         while (l < r)
//         {
//             swap(a[l], a[r]);
//             l++;
//             r--;
//         }
//         return l;
//         return r;
//     }
// }

// void give(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }
// int main()
// {
//     int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int n = 9;
//     int k = 3;

//     int c = imp(a, n, k);

//     give(a, n);
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 9;
    int k = 4;
    for (int i = 0; i < n; i += k)
    {
        int start = i;
        int end = i + k - 1;
        if (end >= n)
        {
            end = n - 1;
        }
        int l = start;
        int r = end;
        while (l < r)
        {
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
