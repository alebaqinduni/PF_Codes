// #include <iostream>
// using namespace std;
// int main()
// { // swap all together
//     int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int n = sizeof(a) / 4;
//     int i = 0;
//     int j = n - 1;
//     while (i < j)
//     {
//         int temp = a[i];
//         a[i] = a[j];
//         a[j] = temp;
//         i++;
//         j--;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// { // swap all in groups
//     int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int n = sizeof(a) / 4;
//     int k = 3;
//     for (int i = 0; i < n; i += k)
//     {
//         int start = i;
//         int end = i + k - 1;
//         if (end >= n)
//         {
//             end = n - 1;
//         }
//         int l = start;
//         int r = end;
//         while (l < r)
//         {
//             int temp = a[l];
//             a[l] = a[r];
//             a[r] = temp;
//             l++;
//             r--;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }

//     return 0;
// }
//----------------------------------------
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 12;
//     int b = 23;
//     cout << "Before swapping: " << a << " " << b << endl;
//     swap(a, b);
//     cout << "After swapping: " << a << " " << b << endl;
// }
//---------------------------------------------

// #include <iostream>
// using namespace std;
// int main()
// {
//     int intArr[] = {4, 2, 4, 2, 4};
//     double dblArr[] = {.5, 1, 1.5, 2, 2.5};
//     for (int i = 0; i < 5; i++)
//     {
//         intArr[i] = intArr[i] * dblArr[i];
//         dblArr[i] = dblArr[i] * intArr[i];
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout << intArr[i] << " " << dblArr[i] << endl;
//     }
//     return 0;
// }

//-------------------------------------------------
// #include <iostream>
// using namespace std;
// int a = 2;
// void f()
// {
//     cout << a << endl;
//     g();
// }
// void g()
// {
//     a = 3;
//     cout << a << endl;
// }
// void h()
// {
//     a = 4;
//     cout << a << endl;
// }
// int main()
// {
//     cout << a << endl;
//     f();
//     cout << a << endl;
//     h();
//     cout << a << endl;
//     return 0;
// }
//--------------------------------------------
#include <iostream>
using namespace std;

// int main()
// {
//     int n, digit, sum = 0;

//     cout << "Enter number: ";
//     cin >> n;

//     for (int i = 0; i < 10; i++)
//     {
//         if (n == 0)
//             break;
//         digit = n % 10;
//         sum = sum + digit;
//         n = n / 10;
//     }

//     cout << "Sum of digits = " << sum;

//     return 0;
// }
//---------------------------------------------
// #include <iostream>
// using namespace std;

// int main()
// {
//     int num, digit, sum = 0;

//     cout << "Enter number: ";
//     cin >> num;

//     for (; num > 0; num = num / 10)
//     {
//         digit = num % 10;
//         sum = sum + digit;
//     }

//     cout << "Sum of digits = " << sum;

//     return 0;
// }
//----------------------------------------------
// #include <iostream>
// using namespace std;

// int main()
// {
//     int num, digit, sum = 0, position = 1;

//     cout << "Enter number: ";
//     cin >> num;

//     while (num > 0)
//     {
//         digit = num % 10;

//         // reverse order problem fix later (we'll handle logically)
//         int power = 1;

//         for (int i = 1; i <= position; i++)
//         {
//             power = power * digit;
//         }

//         sum = sum + power;

//         num = num / 10;
//         position++;
//     }

//     cout << "Sum = " << sum;

//     return 0;
// }
//----------------------------------------------
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int num, digit, sum = 0, position = 1;

//     cout << "Enter number: ";
//     cin >> num;

//     while (num > 0)
//     {
//         digit = num % 10;

//         sum = sum + pow(digit, position);

//         num = num / 10;
//         position++;
//     }

//     cout << "Sum = " << sum;

//     return 0;
// }
//----------------------------------------------
// #include <iostream>
// using namespace std;

// int main()
// {
//     int num, temp, digit, reversed = 0, sum = 0, position = 1;

//     cout << "Enter number: ";
//     cin >> num;

//     temp = num;

//     // reverse number
//     while (temp > 0)
//     {
//         reversed = reversed * 10 + (temp % 10);
//         temp = temp / 10;
//     }

//     temp = reversed;

//     // left to right processing
//     while (temp > 0)
//     {
//         digit = temp % 10;

//         int power = 1;
//         for (int i = 1; i <= position; i++)
//         {
//             power = power * digit;
//         }

//         sum = sum + power;

//         temp = temp / 10;
//         position++;
//     }

//     cout << "Sum = " << sum;

//     return 0;
// }
#include <iostream>
using namespace std;
void reverse(int n[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        cout << n[i] << " ";
    }
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverse(arr, 9);
    return 0;
}