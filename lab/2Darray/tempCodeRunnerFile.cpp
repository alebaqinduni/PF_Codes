#include <iostream>
using namespace std;
int countIdenticalArrays(int arr[][3], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int freq = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i][0] == arr[j][0] &&
                arr[i][1] == arr[j][1] &&
                arr[i][2] == arr[j][2])
            {
                freq++;
            }
        }
        if (freq > 1)
        {
            count = count + freq;
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    int arr[100][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << countIdenticalArrays(arr, n);
    return 0;
}