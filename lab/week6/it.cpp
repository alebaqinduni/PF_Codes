// #include <iostream>
// using namespace std;
// int main()
// {
//     char ch = '*';
//     for (int j = 1; j <= 10; j++)
//     {
//         for (int i = 10; i <= j; i++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 5; j >= i; j--)
//         {
//             if (i + j == 8)
//             {
//                 continue;
//             }
//             cout << i + j << " ";
//         }
//         cout << endl;
//     }
// }