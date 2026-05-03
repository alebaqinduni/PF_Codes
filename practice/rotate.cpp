// #include <iostream>
// using namespace std;
// //rotate array by one
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = 5;

//     int last = arr[n - 1];

//     for (int i = n - 1; i > 0; i--)
//     {
//         arr[i] = arr[i - 1];
//     }

//     arr[0] = last;

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// find max consecutive number.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 1};
//     int n = 11;
//     int count = 0;
//     int maximum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 1)
//         {
//             count++;
//         }
//         else
//         {
//             count = 0;
//         }

//         if (count > maximum)
//         {
//             maximum = count;
//         }
//     }

//     cout << maximum;
//     return 0;
// }

// product of triplet from 1st to 3rd largest
// #include <iostream>
// using namespace std;
// int mx(int x[], int size)
// {
//     int y = INT_MIN;
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
//     int y = INT_MIN;
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
//     int y = INT_MIN;
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
//     int a[] = {1, -4, 3, -6, 7, 0};
//     int first = mx(a, 5);
//     int second = smx(a, 5);
//     int third = tmx(a, 5);
//     cout << first * second * third << endl;

//     return 0;
// }

// move zero to end of array
// #include <iostream>
// using namespace std;

// void push(int arr[], int n)
// {
//     int temp[n];
//     int j = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != 0)
//             temp[j++] = arr[i];
//     }
//     while (j < n)
//     {
//         temp[j++] = 0;
//     }
//     for (int i = 0; i < n; i++)
//         arr[i] = temp[i];
// }
// int main()
// {
//     int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
//     push(arr, 8);
//     for (int num : arr)
//     {
//         cout << num << " ";
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int fact(int n)
{
    int f = 1;
    for (int i = 0; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

int ncr(int c, int r)
{
    int a = fact(c);
    int b = fact(r);
    int d = fact(c - r);
    return a / (b * d);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int ans = ncr(i, j);
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}