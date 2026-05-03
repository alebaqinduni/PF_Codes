#include <iostream>
#include <cmath>
using namespace std;

int take()
{
    int x;
    cin >> x;
    return x;
}

int maximumMarks(int marks[], int size)
{
    int maximum = marks[0]; // main line
    for (int i = 1; i < size; i++)
    {
        if (marks[i] > maximum)
        {
            maximum = marks[i];
        }
    }
    return maximum;
}

void give(int x)
{

    cout << x;
}
using namespace std;
int main()
{
    int marks[100];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks for student " << i + 1 << ": ";
        marks[i] = take();
    }

    int maximum = maximumMarks(marks, 5); // check only that specific boxes
    give(maximum);
    return 0;
}
//////////////////////////////////////////////////
// #include <iostream>
// using namespace std;
// int main()
// {
//     return 0;
// }
//////////////////////////////////////////////////

// #include <iostream>
// #include <cmath>
// using namespace std;

// int take()
// {
//     int x;
//     cin >> x;
//     return x;
// }

// int mx(int a, int b)
// {
//     return max(a, b);
// }

// void give(int x)
// {

//     cout << x;
// }
// using namespace std;
// int main()
// {
//     int a = take();
//     int b = take();
//     int maxxximumm = mx(a, b);
//     give(maxxximumm);
//     return 0;
// }

/////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;

// int take()
// {
//     int x;
//     cin >> x;
//     return x;
// }

// void even(int number)
// {
//     if (number % 2 == 0)
//     {
//         cout << "Even" << endl;
//     }
//     else
//     {
//         cout << "Odd" << endl;
//     }
// }

// int main()
// {
//     int number = take();
//     even(number);
//     return 0;
// }
////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;
// int take()
// {

//     int x;
//     cin >> x;
//     return x; // importantttttt
// }

// int add(int x, int y)
// {
//     return x + y;
// }

// void give(int x)
// {
//     cout << x;
// }
// int main()
// {
//     int a = take();
//     int b = take();
//     int sum = add(a, b);
//     give(sum);
//     return 0;
// }