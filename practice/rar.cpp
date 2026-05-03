#include <iostream>
#include <cmath>
using namespace std;
//-------------------------------------------
//-------------------------------------------
//-------------------------------------------
//-------------------------------------------
//-------------------------------------------
//-------------------------------------------
//-------------------------------------------
//--------------------------------------------
//-------------------------------------------
//-------------------------------------------
//-------------------------------------------
//-------------------------------------------
//-------------------------------------------
//-------------------------------------------
//-------------------------------------------
//-------------------------------------------
//-------------------------------------------
//-------------------------------------------
//-------------------------------------------
//-------------------------------------------
//-------------------------------------------
//-------------------------------------------
//-------------------------------------------
//-------------------------------------------
//-------------------------------------------
//-------------------------------------------
//-------------------------------------------
//-------------------------------------------

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 9;
    int k = 3;

    for (int i = 0; i < n; i += k)
    {
        int start = i;
        int end = i + k - 1;

        if (end >= n)
            end = n - 1;

        int l = start;
        int r = end;

        while (l < r)
        {
            swap(a[l], a[r]);
            l++;
            r--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;

    //-------------------------------------------
    // void reverseArray(int arr[], int n)
    // {
    //     int i = 0, j = n - 1;

    //     while (i < j)
    //     {
    //         swap(arr[i], arr[j]);
    //         i++;
    //         j--;
    //     }
    // }

    // int main()
    // {
    //     int arr[] = {1, 4, 3, 2, 6, 5};
    //     reverseArray(arr, 6);
    //     for (int i = 0; i < 6; i++)
    //     {
    //         cout << arr[i] << " ";
    //     }
    //     cout << endl;
    //     return 0;
    //-------------------------------------------

    //-------------------------------------------
    // int arr[] = {6, 4, 7, 98, 45, 24};

    // int a = arr[0];
    // int b = arr[1];

    // int temp;
    // temp = a;
    // a = b;
    // b = temp;

    // cout << a << " " << b << " " << arr[2] << " " << arr[3] << " " << arr[4] << " " << arr[5] << endl;
    // return 0;
    // int arr[] = {1, 4, 3, 2, 6, 5};
    // swap(arr[0], arr[1]);
    // cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << " " << arr[5] << endl;
    // return 0;

    //--------------------------------------------
    // void  rev(int arr[], int size)
    // {
    //     for (int i = size; i >= 0; i--)
    //     {
    //         cout << arr[i] << endl;
    //     }
    // }
    // int main()
    // {
    //     int arr[] = {1, 4, 3, 2, 6, 5};
    //     rev(arr, 6);

    //-------------------------2nd largest--------
    // int mx(int x[],int size){
    //     int y=x[0];
    //     for(int i=0;i<size;i++){
    //         if(x[i]>y){
    //             y=x[i];
    //         }
    //     }
    //     return y;
    // }

    // int smx(int x[],int size){
    //     int y=x[0];
    //     for(int i=0;i<size;i++){
    //         if(x[i]!=y){
    //             y=x[i];
    //         }
    //     }
    //     return y;
    // }
    // int main()
    // {
    //     int arr[]={2,4,6,8,34,19,38,40};
    //     int frstmx=mx(arr[],8);
    //     int secondmx=smx(arr[],8);
    //     cout<<frstmx;
    //     cout<<secondmx;

    //------------------------------
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
    //////////////////////////////////////////////////////
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

    // int fmx(int x[], int size)
    // {
    //     int y = INT_MIN;
    //     for (int i = 0; i < size; i++)
    //     {
    //         if (x[i] != tmx(x, size) && x[i] != smx(x, size) && x[i] != mx(x, size) && x[i] > y)
    //         {
    //             y = x[i];
    //         }
    //     }
    //     return y;
    // }

    // int main()
    // {
    //     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    //     int f = mx(arr, 9);
    //     int s = smx(arr, 9);
    //     int t = tmx(arr, 9);
    //     int fo = fmx(arr, 9);
    //     cout << f << endl;
    //     cout << s << endl;
    //     cout << t << endl;
    //     cout << fo << endl;
    //     return 0;
    // }
    //-------------------------
    // int main()
    // {
    //     int n;
    //     cout << "Enter n time: ";
    //     cin >> n;
    //     int arr[n];
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << "Enter number " << i + 1 << ": ";
    //         cin >> arr[i];
    //     }
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << arr[i] * (i + 1) << endl;
    //     }

    //-------------------------
    // void maximum(int x[], int size)
    // {
    //     int y = x[0];
    //     for (int i = 0; i < size; i++)
    //     {
    //         if (x[i] > y)
    //         {
    //             y = x[i];
    //         }
    //     }
    //     cout << y << endl;
    // }

    // int main()
    // {
    //     // to find max value
    //     int arr[6];
    //     for (int i = 0; i < 6; i++)
    //     {
    //         cin >> arr[i];
    //     }
    //     maximum(arr, 6);

    //     return 0;

    //-------------------------
    // int sum(int num[], int size)
    // {
    //     int plus = 1;
    //     for (int x = 0; x < size; x++)
    //     {
    //         plus *= num[x];
    //     }
    //     return plus;
    // }

    // int main()
    // {
    //     int arr[6];
    //     for (int x = 0; x < 6; x++)
    //     {
    //         cin >> arr[x];
    //     }
    //     int boo = sum(arr, 6);
    //     cout << boo << endl;
    //-------------------------
    // int sum(int x, int y, int z)
    // {
    //     return x + y + z;
    // }
    // int main()
    // {
    //     int arr[3];
    //     for (int i = 0; i < 3; i++)
    //     {
    //         cout << "Enter number " << i + 1 << ": ";
    //         cin >> arr[i];
    //     }
    //     int add = sum(arr[0], arr[1], arr[2]);
    //     cout << "Sum: " << add << endl;

    //-------------------------
    // void get(int x[])
    // {
    //     x[0] = 66;
    // }
    // int main()
    // {
    //     int num[4];
    //     for (int i = 0; i < 4; i++)
    //     {
    //         cout << "Enter number " << i + 1 << ": ";
    //         cin >> num[i];
    //     }
    //     for (int i = 0; i < 4; i++)
    //     {
    //         cout << num[i] << endl;
    //     }

    //     get(num); // no need for [] in here just
    //     for (int i = 0; i < 4; i++)
    //     {
    //         cout << num[i] << endl;
    //     }

    //-------------------------
    // reverse array
    // int num[5] = {4, 1, 3, 7, 3};
    // for (int i = 4; i >= 0; i--)
    // {
    //     cout << num[i] << endl;
    // }
    return 0;
}